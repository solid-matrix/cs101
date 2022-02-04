// 数独
#include <stdio.h>

int a[9][9];  // 原数独矩阵
int r[9][9];  // 数独的解矩阵

int v[9][10];     // 列占用
int h[9][10];     // 行占用
int c[3][3][10];  // 小格子占用

// 打印数独矩阵
void Print() {
  for (int i = 0; i < 9; i++) {
    if (i % 3 == 0) printf("- - - - - - - - - - - - -\n");
    for (int j = 0; j < 9; j++) {
      if (j % 3 == 0) printf("| ");
      if (a[i][j] == 0)
        printf("%d ", r[i][j]);
      else
        printf("%d ", a[i][j]);
    }
    printf("|\n");
  }
  printf("- - - - - - - - - - - - -\n");
}

void Resolve(int g) {
  // 把i和j合并成一个g进行递归，以方便运算。在开头再拆解i和j。
  int i = g / 9, j = g % 9;

  // TODO
}

int main() {
  // init 初始化
  for (int i = 0; i < 9; i++)
    for (int j = 0; j < 9; j++)
      for (int k = 1; k <= 9; k++) v[i][k] = h[j][k] = c[i / 3][j / 3][k] = 0;

  // 输入原数独，并标记占有
  for (int i = 0; i < 9; i++)
    for (int j = 0; j < 9; j++) {
      scanf("%d", &a[i][j]);
      if (a[i][j]) v[i][a[i][j]] = h[j][a[i][j]] = c[i / 3][j / 3][a[i][j]] = 1;
    }

  Resolve(0);
  return 0;
}