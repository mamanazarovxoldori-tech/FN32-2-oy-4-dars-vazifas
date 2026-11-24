#include <stdio.h>

void merge(int *a, int size1, int *b, int size2, int *result) {
    for (int i = 0; i < size1; i++) {
        *result = *(a + i);
        result++;
    }
    for (int i = 0; i < size2; i++) {
        *result = *(b + i);
        result++;
    }
}

int main(void) {
    int a[] = {10, 20, 30};
    int b[] = {40, 50, 60};
    int result[6];

    merge(a, 3, b, 3, result);

    for (int i = 0; i < 6; i++) {
        printf("%d ", *(result + i));
    }
    printf("\n");
    return 0;
}