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

namespace LibCore {
    
    class BasicLexer {
    protected:
        int line = 1;
        std::string_view sw;
        const char* it;

    public:
        BasicLexer() = default;
        BasicLexer(const std::string_view& v);

        inline void restart()
        {
            it = sv.begin();
        }

        inline bool end()
        {
            return it >= sv.end();
        }

        bool eatWord(const char* word);

        template<typename C> std::string_view digestWhile(C cond) 
        {
            if (end())
                return nullptr;
            
            auto start = it;
            size_t count = 0;
            char c;

            while (!end() && cond(c == peek())) {
                count++;
            }
        }

        inline void digestWhitespace(bool includeBreaks = true) {
            if (includeBreaks) {
                digestWhile([](char c) -> bool { return isspace(c) });
            } else {
                /// FIXIME: todo
            }
        }

        char peek(long ahead = 0) const;

    }; // class BasicLexer
    
} // namespace LibCore

#endif 