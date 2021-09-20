#include <stdio.h>

int main() {
    int arr[10] = { [0 ... 9] = 5 };

    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    printf("\n");
}