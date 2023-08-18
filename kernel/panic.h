/**
 * @file panic.h
 * @author Krisna Pranav
 * @brief panicc kernel!!
 * @version 1.0
 * @date 2023-08-18
 * 
 * @copyright Copyright (c) 2023 Krisna Pranav, MTCP-Labs
 * 
 */

#ifndef KERNEL_PANIC_H
#define KERNEL_PANIC_H

/**
 * @param reasons 
 * @param reasonCount 
 */
[[noreturn]] void kernelPanic(const char** reasons, int reasonCount);



#endif