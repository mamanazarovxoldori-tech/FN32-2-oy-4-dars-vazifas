#include <stdio.h>

int main() {
    int arr[5] = {5, 15, 25, 35, 45};
    int *p = arr;

    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, *(p + i));
    }
    return 0;
}