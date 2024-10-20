#include <stdio.h>

int main() {
    char name[50];
    int length = 0;
    char ch;

    printf("Enter your name: \n");

    while ((ch = getchar()) != '\n' && length < 49) {
        name[length] = ch;
        length++;
    } printf("\n");

    printf("Reversed name is:\n ");

    for (int i = length - 1; i >= 0; i--) {
        printf("%c", name[i]);
    }

    return 0;
}
