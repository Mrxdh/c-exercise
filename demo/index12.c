#include <stdio.h>
/*
 * 请使用递归函数完成本题
 * 小编已将正确代码放在左侧任务的“不知道怎么办”里
 * 小编希望各位童鞋独立完成哦~
 */
int getAge(int n) {
  if (n == 1) {
    return 10;
  }
  return getAge(n - 1) + 2;
}

int main() {

  printf("第5个人的年龄是%d岁", getAge(5));
  return 0;
}
