#include <stdio.h>
#include <string.h>
int is_palindrome(char* s) {
  long len = strlen(s);
  for (int i = 0; i < len / 2; i++)
    if (s[i] != s[len - i - 1]) return 0;
  return 1;
}
int main() {
  char s[100];
  scanf("%s", s);
  printf("%s\n", is_palindrome(s) ? "YES" : "NO");
}