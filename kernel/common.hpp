/**
 * @file common.hpp
 * @author Krisna Pranav
 * @brief common
 * @version 1.0
 * @date 2023-08-26
 * 
 * @copyright Copyright (c) 2023 Krisna Pranav, CrazyOS Developers
 * 
 */

#ifndef __CRAZYOS_KERNEL_COMMON_H__
#define __CRAZYOS_KERNEL_COMMON_H__

namespace Kernel
{
    // floats
    typedef float f32;
    typedef double f64;

    // ints
    typedef char i8;
    typedef unsigned char u8;
    typedef short i16;
    typedef unsigned short u16;
    typedef int i32;
    typedef unsigned int u32;
    typedef long long i64;
    typedef unsigned long long u64;

    // size
    typedef int isize;
    typedef unsigned int usize;

    static_assert(sizeof(f32) == 4, "Unexpected size for f32");
    static_assert(sizeof(f64) == 8, "Unexpected size for f64");
    static_assert(sizeof(i8) == 1, "Unexpected size for i8");
    static_assert(sizeof(u8) == 1, "Unexpected size for u8");
    static_assert(sizeof(i16) == 2, "Unexpected size for i16");
    static_assert(sizeof(u16) == 2, "Unexpected size for u16");
    static_assert(sizeof(i32) == 4, "Unexpected size for i32");
    static_assert(sizeof(u32) == 4, "Unexpected size for u32");
    static_assert(sizeof(i64) == 8, "Unexpected size for i64");
    static_assert(sizeof(u64) == 8, "Unexpected size for u64");
    static_assert(sizeof(isize) == 4, "Unexpected size for isize");
    static_assert(sizeof(usize) == 4, "Unexpected size for usize");

} // namespace Kernel 

#endif