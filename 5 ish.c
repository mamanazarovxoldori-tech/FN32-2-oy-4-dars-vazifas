#include <stdio.h>

float average(int *a, int *b, int *c) {
    return (*a + *b + *c) / 3.0f;
}

int main() {
    int a = 10, b = 20, c = 40;
    printf("O'rtacha qiymat: %.2f\n", average(&a, &b, &c));   // 23.33
    return 0;
}