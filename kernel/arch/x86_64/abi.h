/**
 * @file abi.h
 * @author Krisna Pranav
 * @brief abi
 * @version 1.0
 * @date 2023-08-18
 * 
 * @copyright Copyright (c) 2023 Krisna Pranav, MTCP-Labs
 * 
 */

#ifndef ABI_H
#define ABI_H

#include <stdint.h>

typedef struct 
{
    uint64_t a_type;
    uint64_t a_val;
} auxv_t;

#define AT_PHDR 3
#define AT_PHENT 4
#define AT_PHNUM 5
#define AT_ENTRY 9
#define AT_RANDOM 25
#define AT_EXECPATH 15
#define AT_EXECFN 31

#endif