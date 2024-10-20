#include <stdio.h>

int main() {
    int arr[3][4];
    int i, j;
    int sum, average;

    printf("Enter numbers of the array [3][4]:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &arr[i][j]);
        }
    } for (j = 0; j < 4; j++) {
        sum = 0;
        for (i = 0; i < 3; i++) {
            sum += arr[i][j];
        }

        average = sum / 3;
        printf("Sum of column %d is: %d, Average is: %d\n", j + 1, sum, average);
    }

    return 0;
}
