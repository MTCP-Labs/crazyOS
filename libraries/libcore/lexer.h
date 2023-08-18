/**
 * @file lexer.h
 * @author Krisna Pranav
 * @brief lexer parser for json
 * @version 1.0
 * @date 2023-08-18
 * 
 * @copyright Copyright (c) 2023 Krisna Pranav, MTCP-Labs
 * 
 */

#ifndef LIBCORE_LEXER_H
#define LIBCORE_LEXER_H

#include <cctype>
#include <string_view>
#include <vector>

namespace LibCore 
{
    class BasicLexer 
    {
    protected:
        int line = 1;
        std::string_view sv;
        const char* it;

    public:
        
        BasicLexer() = default;
        BasicLexer(const std::string_view& v);

        /// @breif: restart & end
        inline void restart() 
        { 
            it = sv.begin(); 
        }

        inline bool end() 
        { 
            return it >= sv.end(); 
        }

        char consume();

        /**
         * @param word 
         * @return true 
         * @return false 
         */
        bool consumeWord(const char* word);

        /**
         * @tparam C 
         * @param cond 
         * @return std::string_view 
         */
        template <typename C> std::string_view consumeWhile(C cond) 
        {
            if (end())
                return nullptr;

            auto start = it;
            size_t count = 0;
            char c;
            while (!end() && cond(c = peek())) 
            {
                count++;

                if (c == '\n') {
                    line++;
                }

                end();
            }

            return sv.substr(static_cast<size_t>(start - sv.begin()), count);
        }

        int consumeOne(char c);
        
        /**
         * @param includeBreaks 
         */
        inline void consumeWhitespace(bool includeBreaks = true) 
        {
            if (includeBreaks) {
                consumeWhile([](char c) -> bool  { return isspace(c) || isblank(c) || c == '\t' || c == '\n' || c == '\r'; });
            } else {
                consumeWhile([](char c) -> bool { return isspace(c) || isblank(c) || c == '\t'; });
            }
        }

        char peek(long ahead = 0) const;
    }; // class BasicLexer
} // namespace LibCore

#endif