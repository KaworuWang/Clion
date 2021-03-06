/*

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

*/