/*
德州扑克有52张牌
每次游戏，只考虑一个玩家，将从52张牌里选出7张牌
请问，总共有多少种不同的牌的组合？

注意1：52张牌可以标号为 0, 1, 2, 3, ..., 50, 51
注意2：<0, 1, 2, 3, 4, 5, 6> 和 <0, 1, 2, 3, 4, 6, 5>
      视为同一种组合，即顺序不影响组合
注意3: 所以只需要考虑递增的序列即可，即可遍历出所有的组合

*/
#include <stdio.h>

// 统计牌的组合数
int count = 0;

void Resolve(int d, int s) {
  if (d == 7) {
    count++;
    return;
  }
  // TODO
}

int main() {
  Resolve(0, 0);
  printf("Total number of combinations = %d", count);
  return 0;
}