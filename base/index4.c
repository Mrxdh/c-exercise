#include <stdio.h>
int main() {
  int score = 7200;

  if (score >= 10000) {
    printf("钻石玩家");
  } else if (score >= 5000) {
    printf("白金玩家");
  } else if (score >= 1000) {
    printf("青铜玩家");
  } else if (score < 1000) {
    printf("普通玩家");
  }
  return 0;
}
