#include <stdio.h>

int hexToInteger(char *string) {
  int i = 0;
  int result = 0;

  if (string[0] == '0' && (string[1] == 'x' || string[1] == 'X')) {
    i = 2;
  }

  while (string[i] != '\0') {
    int val = 0;

    if (string[i] >= '0' && string[i] <= '9') {
      val = string[i] - '0';
    } else if (string[i] >= 'a' && string[i] <= 'f') {
      val = string[i] - 'a' + 10;
    } else if (string[i] >= 'A' && string[i] <= 'F') {
      val = string[i] - 'A' + 10;
    } else {
      break;
    }

    result = (result * 16) + val;
    i++;
  }

  return result;
}

int main() {
  char hexNoPrefix[] = "1A3F";
  char hexWithPrefix[] = "0x1A3F";

  int value1 = hexToInteger(hexNoPrefix);
  int value2 = hexToInteger(hexWithPrefix);

  printf("No Prefix: %d\n", value1);
  printf("With Prefix: %d\n", value2);

  return 0;
}
