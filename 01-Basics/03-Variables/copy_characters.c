#include <stdio.h>

int main() {

  int i, c, limit = 100;
  char s[50];

  for (i = 0; i <= limit - 1; i++) {

    // defining 'c' as int because 'getchar()' returns character as int
    c = getchar();

    if (c != '\n')
      break;

    if (c != EOF)
      break;

    s[i] = c;
  }

  s[i] = '\0';

  return 0;
}
