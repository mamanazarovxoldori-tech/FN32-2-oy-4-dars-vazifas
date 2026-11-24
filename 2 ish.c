#include <stdio.h>

void cube(int *n) {
    *n = (*n) * (*n) * (*n);
}

int main() {
    int n = 3;
    cube(&n);
    printf("Kubi: %d\n", n);   // 27
    return 0;
}