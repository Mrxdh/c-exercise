#include <stdio.h>
int main() {
  int i;
  for (i = 1; i <= 10; i++) {
    printf("%d\n", i);
    //是不是少了一个判断呢？
    //在这里使用goto语句
    if (i == 3)
      goto LOOP;
  }
  return 0;
LOOP:
  printf("结束for循环了...."); //请选择合适位置添加标识符
}
