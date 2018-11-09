#include <stdio.h>

// 将字符串str中的小写字母变成大写字母，并返回改变后的字符串
// 注意的是：这里的参数要传字符串变量，不能传字符串常量
char * upper(char *str) {
    // 先保留最初的地址。因为等会str指向的位置会变来变去的。
    char *dest = str;
    
    // 如果还不是空字符
    while (*str != '\0') {
        // 如果是小写字母
        if (*str >= 'a' && *str <= 'z') {
            // 变为大写字母。小写和大写字母的ASCII值有个固定的差值
            *str -= 'a' - 'A';
        }
        
        // 遍历下一个字符
        str++;
    }
    
    // 返回字符串
    return dest;
}

int main()
{
    // 定义一个字符串变量
    char str[] = "lmj";
    
    // 调用函数
    char *dest = upper(str);
    
    printf("%s", dest);
    return 0;
}