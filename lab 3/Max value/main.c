#include <stdio.h>

int main() {
    int arr[5];
    int i, min, max;


    printf("Enter the number:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    max = arr[0];

    for (i = 1; i < 5; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Minumum Vlue is: %d\n", min);
    printf("Maxumum Vlue is: %d\n", max);

    return 0;
}
