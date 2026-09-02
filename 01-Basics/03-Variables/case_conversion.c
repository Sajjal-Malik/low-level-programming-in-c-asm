#include <stdio.h>

char toLowerCharacter(char c) {
  if (c >= 'A' && c <= 'Z')
    return c + 'a' - 'A';
  else
    return c;
}

int main() {

  char c, result;
  c = 'B';
  result = toLowerCharacter(c);
  printf("%c\n", result);

  return 0;
}
