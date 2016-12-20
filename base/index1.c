#include <stdio.h>
int main() {
  //定义小编兜里的钱
  double money = 100;
  //定义打车回家的费用
  double price = 120;
  printf("小编能不能打车回家呢：");
  //输出y小编就打车回家了，输出n小编就不能打车回家
  printf("%c\n", price > money ? 'y' : 'n');
  return 0;
}
