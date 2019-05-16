#include <stdio.h>

int main(int argc, char *argv[])
{
    int distance = 100;
    float power = 2.345f;
    double super_power = 56789.4532;
    char initial = 'A';
    char first_name[] = "Zed";
    char last_name[] = "Shaw";

    printf("You are %d miles away. \n", distance);
    printf("You have %f levels of Power .\n", power);
    printf("You have %f awesome super powers. \n", super_power);
    printf("I have an initial %c .\n", initial);
    printf("I have a first name %s .\n", first_name);
    printf("I have a last name %s .\n", last_name);
    printf("My whole name is %s %c. %s. \n", first_name, initial, last_name);

}

/*
 * 整数
 * 使用int声明，使用%d来打印。

 * 浮点
 * 使用float或double声明，使用%f来打印。

 * 字符
 * 使用char来声明，以周围带有'（单引号）的单个字符来表示，使用%c来打印。

 * 字符串（字符数组）
 * 使用char name[]来声明，以周围带有"的一些字符来表示，使用%s来打印。
 * C语言中区分单引号的char和双引号的char[]或字符串。
 */