#include <stdio.h>

int main() {
    float a, b, c;
    float avg;
    scanf("%f %f %f %f", &a, &b, &c, &avg);
    avg = (a+b+c)/3;
    printf("Average: %.2f\n", avg);
    return 0;
}