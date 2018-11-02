#include <stdio.h>
int main() {
  //第一种形式
  int arrFirst[3] = {1, 2, 3};
  //第二种形式
  int arrSecond[] = {2, 3, 4};
  //第三种形式
  int arrThird[3];
  //给arrThird数组每个元素初始化
  arrThird[0] = 9;
  arrThird[1] = 8;
  arrThird[2] = 10;
  //输出第一个数组中的第二个元素
  printf("%d\n", arrFirst[1]);
  //输出第二个数组中的第二个元素
  printf("%d\n", arrSecond[1]);
  //输出第三个数组中的第二个元素
  printf("%d\n", arrThird[1]);
  return 0;
}
