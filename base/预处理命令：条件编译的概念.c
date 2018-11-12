#include <stdio.h>

#define MAX 11

int main ()
{
#if MAX == 0
    printf("MAX是0");
#elif MAX > 0
    printf("MAX大于0");
#else
    printf("MAX小于0");
#endif
    return 0;
}

// #if 和 #elif后面的条件不仅仅可以用来判断宏的值，还可以判断是否定义过某个宏
// #if defined(MAX)
// #if !defined(MAX)


// #ifdef的使用和#if defined()的用法基本一致
// #ifdef MAX
// ..code..
// #endif