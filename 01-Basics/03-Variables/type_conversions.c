#include <stdio.h>

#define get_type(X)                                                            \
  _Generic((X),                                                                \
      int: "int",                                                              \
      float: "float",                                                          \
      double: "double",                                                        \
      char: "char",                                                            \
      char *: "string/pointer to char",                                        \
      default: "unknown type")

int numStringToInteger(char s[]) {
  int i, n;
  n = 0;

  for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
    n = 10 * n + (s[i] - '0');
  }
  return n;
}

int main() {

  char *s = "123";
  int result = numStringToInteger(s);

  printf("The result value is: %d\n", result);
  printf("Type of this value is: %s", get_type(result));

  return 0;
}
