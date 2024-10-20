#include <stdio.h>

int main() {
    int arr[5];
    int i, search, value =0;

    printf("Enter numbers for the array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to search:\n");
    scanf("%d", &search);


    for (i = 0; i < 5; i++) {
        if (arr[i] == search) {
            value = i;
            break;
        }
    }

    if (value != 0)
     {
            printf("The value %d is found at index: %d\n", search, value);}
     else {
        printf("The value %d is not FOUND.\n", search);
    }

    return 0;
}
