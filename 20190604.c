/*
类型大小

stdint.h为定长的整数类型定义了一些typedef，同时也有一些用于这些类型的宏。这比老的limits.h更加易于使用，因为它是不变的。\
这些类型如下：
int8_t
8位符号整数。

uint8_t
8位无符号整数。

int16_t
16位符号整数。

uint16_t
16位无符号整数。

int32_t
32位符号整数。

uint32_t
32位无符号整数。

int64_t
64位符号整数。

uint64_t
64位无符号整数。


INT(N)_MAX
N位符号整数的最大正值，例如INT16_MAX。

INT(N)_MIN
N位符号整数的最小负值。

UINT(N)_MAX
N位无符号整数的最大正值。为什么不定义其最小值，是因为最小值是0，不可能出现负值。

int_least(N)_t
至少N位的整数。

uint_least(N)_t
至少N位的无符号整数。

INT_LEAST(N)_MAX
int_least(N)_t类型的最大值。

INT_LEAST(N)_MIN
int_least(N)_t类型的最小值。

UINT_LEAST(N)_MAX
uint_least(N)_t的最大值。

int_fast(N)_t
与int_least(N)_t相似，但是是至少N位的“最快”整数。

uint_fast(N)_t
至少N位的“最快”无符号整数。

INT_FAST(N)_MAX
int_fast(N)_t的最大值。

INT_FAST(N)_MIN
int_fast(N)_t的最小值。

UINT_FAST(N)_MAX
uint_fast(N)_t的最大值。

intptr_t
足够存放指针的符号整数。

uintptr_t
足够存放指针的无符号整数。

INTPTR_MAX
intptr_t的最大值。

INTPTR_MIN
intptr_t的最小值。

UINTPTR_MAX
uintptr_t的最大值。

intmax_t
系统中可能的最大尺寸的整数类型。

uintmax_t
系统中可能的最大尺寸的无符号整数类型。

INTMAX_MAX
intmax_t的最大值。

INTMAX_MIN
intmax_t的最小值。

UINTMAX_MAX
uintmax_t的最大值。

PTRDIFF_MIN
ptrdiff_t的最小值。

PTRDIFF_MAX
ptrdiff_t的最大值。

SIZE_MAX
size_t的最大值。




 */