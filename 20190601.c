/*

 可用的数据类型
int
储存普通的整数，默认为32位大小。
译者注：int在32或64位环境下为32位，但它不应该被看作平台无关的。如果需要用到平台无关的定长整数，请使用int(n)_t。
double
储存稍大的浮点数。
float
储存稍小的浮点数。
char

储存单字节字符。
void

表示“无类型”，用于声明不返回任何东西的函数，或者所指类型不明的指针，例如void *thing。
enum

枚举类型，类似于整数，也可转换为整数，但是通过符号化的名称访问或设置。当switch语句中没有覆盖到所有枚举的元素时，一些编译器会发出警告。
类型修饰符
unsigned
修改类型，使它不包含任何负数，同时上界变高。
signed
可以储存正数和负数，但是上界会变为（大约）一半，下界变为和上界（大约）等长。
译者注：符号修饰符只对char和*** int有效。*** int默认为signed，而char根据具体实现，可以默认为signed，也可以为unsigned。
long

对该类型使用较大的空间，使它能存下更大的数，通常使当前大小加倍。
short
对该类型使用较小的空间，使它储存能力变小，但是占据空间也变成一半。
类型限定符
const
表示变量在初始化后不能改变。
volatile
表示会做最坏的打算，编译器不会对它做任何优化。通常仅在对变量做一些奇怪的事情时，才会用到它。
register
强制让编译器将这个变量保存在寄存器中，并且也可以无视它。目前的编译器更善于处理在哪里存放变量，所以应该只在确定这样会提升性能时使用它。
类型转换
C使用了一种“阶梯形类型提升”的机制，它会观察运算符两边的变量，并且在运算之前将较小边的变量转换为较大边。这个过程按照如下顺序：
long double
double
float
long long
long
int (short, char)
译者注：short和char会在运算之前转换成int。同种类型的unsigned和signed运算，signed保持字节不变转换成unsigned。
类型大小
stdint.h为定长的整数类型定义了一些typedef，同时也有一些用于这些类型的宏。这比老的limits.h更加易于使用，因为它是不变的。这些类型如下：
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
译者注：当用于对类型大小有要求的特定平台时，可以使用这些类型。如果你怕麻烦，不想处理平台相关类型的今后潜在的扩展的话，也可以使用这些类型。
下面的模式串为(u)int(BITS)_t，其中前面的u代表unsigned，BITS是所占位数的大小。这些模式串返回了这些类型的最大（或最小）值。
INT(N)_MAX
N位符号整数的最大正值，例如INT16_MAX。
INT(N)_MIN
N位符号整数的最小负值。
UINT(N)_MAX
N位无符号整数的最大正值。为什么不定义其最小值，是因为最小值是0，不可能出现负值。
警告

要注意，不要从字面上在任何头文件中去找INT(N)_MAX的定义。这里的N应该为特定整数，比如8、16、32、64，甚至可能是128。我在这个练习中使用了这个记法，就不需要显式写出每一个不同的组合了。
在stdint.h中，对于size_t类型和足够存放指针的整数也有一些宏定义，以及其它便捷类型的宏定义。编译器至少要保证它们为某一大小，并允许它们为更大的大小。
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
可用的运算符
这是一个全面的列表，关于你可以在C中使用的全部运算符。这个列表中我会标明一些东西：
二元

该运算符有左右两个操作数：X + Y。
一元

该运算符作用于操作数本身-X。
前缀

该运算符出现在操作数之前：++X。
后缀

通常和前缀版本相似，但是出现在操作数之后，并且意义不同：X++。
三元

只有一个三元运算符，意思是“三个操作数”：X ? Y : Z。
算数运算符
下面是基本的算数运算符，我将函数调用()放入其中因为它更接近“算数”运算。
()

函数调用。
二元 *

乘法。

/

除法。

二元 +

加法。

一元 +

无变化。

后缀 ++
读取变量然后自增。
前缀 ++
自增变量然后读取。
后缀 --
读取变量然后自减。
前缀 --
自减变量然后读取。
二元 -

减法。

一元 -

取反，可用于表示负数。
数据运算
它们用于以不同方式和形式访问数据。
->

结构体指针的成员访问。一元*和.运算符的复合。
.

结构体值的成员访问。
[]

取数组下标。二元+和一元*运算符的复合。
sizeof
取类型或变量大小。
一元 &

取地址。

一元 *

取值（提领地址）。
逻辑运算符
它们用于测试变量的等性和不等性。
!=

不等于。

<

小于。

<=

小于等于。
==

等于（并不是赋值）。
>

大于。

>=

大于等于。
位运算符
它们更加高级，用于修改整数的原始位。
二元 &

位与。

<<

左移。

>>

右移。

^

位异或。

|

位或。

~

取补（翻转所有位）。
布尔运算符。
用于真值测试，仔细学习三元运算符，它非常有用。
!

取非。

&&

与。

||

或。

?:

三元真值测试，X ? Y : Z读作“若X则Y否则Z”。
赋值运算符
复合赋值运算符在赋值同时执行运算。大多数上面的运算符都可以组成复合赋值运算符。
=

赋值。

%=

取余赋值。
&=

位与赋值。
*=

乘法赋值。
+=

加法赋值。
-=

减法赋值。
/=

除法赋值。
<<=

左移赋值。
>>=

右移赋值。
^=

位异或赋值。
|=

位或赋值。
可用的控制结构
下面是一些你没有接触过的控制结构：
do-while
do { ... } while(X);首先执行花括号中的代码，之后再跳出前测试X表达式。
break
放在循环中用于跳出循环。
continue
跳到循环尾。
goto

跳到你已经放置label的位置，你已经在dbg.h中看到它了，用于跳到error标签。
 */