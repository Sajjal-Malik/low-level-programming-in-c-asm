
#include <float.h>
#include <limits.h>
#include <stdio.h>

int main() {

  // Character ranges
  printf("char range: %d to %d\n", CHAR_MIN, CHAR_MAX);
  printf("unsigned char max: %u\n\n", UCHAR_MAX);

  // Integer ranges
  printf("short range: %d to %d\n", SHRT_MIN, SHRT_MAX);
  printf("int range: %d to %d\n", INT_MIN, INT_MAX);
  printf("unsigned int max: %u\n", UINT_MAX);
  printf("long range: %ld to %ld\n\n", LONG_MIN, LONG_MAX);

  // Floating-point ranges
  printf("float range: %e to %e\n", FLT_MIN, FLT_MAX);
  printf("double range: %e to %e\n", DBL_MIN, DBL_MAX);

  return 0;
}
