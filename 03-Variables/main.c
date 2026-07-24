#include <stdio.h>

int main() {

    float num_1 = 4.5;
    double num_2 = -123.2423512;

    // printf("num 1: ");
    // scanf("%f: ", &num_1);
    // printf("Value of num 1 is %f:\n", num_1);

    // printf("num 2: ");
    // scanf("%lf: ", &num_2);
    // printf("Value of num 2 is %lf:\n", num_2);

    char c = 's';
    int distance = 5700;

    printf("Type char here: ");
    scanf("%c", &c);
    printf("Char you typed is: %c\n", c);
    printf("Char ascii value is: %d\n", c);

    return 0;
}
