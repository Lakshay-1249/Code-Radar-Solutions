#include <stdio.h>

int main() {
    int a, b, c;
    float avg;
    scanf("%d %d %d %f", &a, &b, &c, &avg);
    avg = (a+b+c)/3;
    printf("Average: %.2f\n", avg);
    return 0;
}