#include <stdio.h>

int ourStrLen(char s[]) {
  int i;

  while (s[i] != '\0') {
    ++i;
  }

  return i;
}

int main() {

  char *s = "Hello, World";
  printf("%d\n", ourStrLen(s));
}
