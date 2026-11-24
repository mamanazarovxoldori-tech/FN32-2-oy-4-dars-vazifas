#include <stdio.h>

int findMax(int *a, int *b) {
    return (*a > *b) ? *a : *b;
}

int main() {
    int a = 15, b = 42;
    printf("Eng katta son: %d\n", findMax(&a, &b));   // 42
    return 0;
}