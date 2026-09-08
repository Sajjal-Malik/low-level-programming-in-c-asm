#include <stdio.h>
#include <time.h>

// Internal state for the Linear Congruential Generator (LCG)
static unsigned long int next = 1;

/* rand: return pseudo-random integer on 0..32767 */
int rand(void) {
  next = next * 1103515245 + 12345;
  return (unsigned int)(next / 65536) % 32768;
}

/* srand: set seed for rand() */
void srand(unsigned int seed) { next = seed; }

int main(void) {
  // This ensures a different sequence of numbers on every run
  srand((unsigned int)time(NULL));

  printf("Generating 5 pseudo-random numbers:\n");
  for (int i = 0; i < 5; i++) {
    printf("Number %d: %d\n", i + 1, rand());
  }

  return 0;
}
