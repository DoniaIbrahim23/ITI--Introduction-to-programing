#include <stdio.h>

int main() {
    int arr[5];
    int i, j, sort;

    printf("PLZ Enter the numbers :\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 5 - 1; i++) {
        for (j = 0; j < 5 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {

                sort = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = sort;
            }
        }
    }

    printf("Array sort Is:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
