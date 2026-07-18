#include <stdio.h>

int main() {

    int speed = 0;
    int time = 0;

    printf("Speed: ");
    scanf("%d", &speed);

    printf("Time: ");
    scanf("%d", &time);

    int distance = speed * time;

    printf("Distance equals: %d", distance);

    return 0;
}
