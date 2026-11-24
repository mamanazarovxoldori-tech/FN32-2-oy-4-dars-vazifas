#include <stdio.h>

void square(int *n) {
    *n = (*n) * (*n);
}

int main() {
    int n = 5;
    square(&n);
    printf("Kvadrati: %d\n", n);
    return 0;
}
