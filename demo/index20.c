#include <stdio.h>
#include <string.h>
/* 定义say函数 */
void say(char a1[]) //数组参数应该怎么写呢？
{
  printf("%s\n", a1);
}

int main() {
  //定义字符串数组
  char s1[] = "的萨达萨达";
  printf("%lu\n", strlen(s1));
  say(s1); //调用say函数输出字符串
  return 0;
}
