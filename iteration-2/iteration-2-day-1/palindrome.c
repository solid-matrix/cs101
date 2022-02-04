/*
判断是否为回文字符串
如12321即为回文字符串，即字符串对称
12321 123321 1233321 asdfdsa asddddsa 都为回文字符串
1234521 asdfgdsa hello 不是回文字符串
*/
#include <stdio.h>
#include <string.h>
int is_palindrome(char* s) {
  // TODO
}
int main() {
  char s[100];
  scanf("%s", s);
  printf("%s\n", is_palindrome(s) ? "YES" : "NO");
}