/**
 *
 * @file    common_types.h
 * @author  ShizZy <shizzy247@gmail.com>
 * @date    2012-02-11
 * @brief   Common types used throughout the project
 *
 * @section LICENSE
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 */

#pragma once

#include <cstdint>

#ifdef _MSC_VER
#ifndef __func__
#define __func__ __FUNCTION__
#endif
#endif

typedef std::uint8_t u8;   ///< 8-bit unsigned byte
typedef std::uint16_t u16; ///< 16-bit unsigned short
typedef std::uint32_t u32; ///< 32-bit unsigned word
typedef std::uint64_t u64; ///< 64-bit unsigned int

typedef std::int8_t s8;   ///< 8-bit signed byte
typedef std::int16_t s16; ///< 16-bit signed short
typedef std::int32_t s32; ///< 32-bit signed word
typedef std::int64_t s64; ///< 64-bit signed int

typedef float f32;  ///< 32-bit floating point
typedef double f64; ///< 64-bit floating point

// An inheritable class to disallow the copy constructor and operator= functions
class NonCopyable {
protected:
    constexpr NonCopyable() = default;
    ~NonCopyable() = default;

    NonCopyable(const NonCopyable&) = delete;
    NonCopyable& operator=(const NonCopyable&) = delete;
};