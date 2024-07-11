#include <stdint.h>

// unsigned integers mean that they can only be positive or null
// signed integers mean that they can be both positive and negative ranges

// unsigned integers
using u64 = uint64_t;
using u32 = uint32_t;
using u16 = uint16_t;
using u8 = u_int8_t;

// signed integers
using s64 = int64_t;
using s32 = int32_t;
using s16 = int16_t;
using s8 = int8_t;

// defining constants with hexadecimal representations for invalid IDs of different integer types
// the values are set to represent the maximum possible value for each integer type
constexpr u64 u64_invalid_id { 0xffff'ffff'ffff'ffffui64 }
constexpr u32 u32_invalid_id { 0xffff'ffffui32 }
constexpr u16 u16_invalid_id { 0xffffui16 }
constexpr u8 u8_invalid_id { 0xffui8 }

using f32 = float;