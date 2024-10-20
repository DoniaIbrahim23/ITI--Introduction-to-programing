#include <stdio.h>
#include <string.h>

int main() {
    char firstName[10];
    char lastName[10];
    char fullName[20];

    printf("Enter your first name: \n");
    scanf("%s", firstName);

    printf("Enter your last name: \n");
    scanf("%s", lastName);

   strcpy(fullName, firstName);
   strcat(fullName, " ");
   strcat(fullName, lastName);

    printf("\n");

    printf("Your Full name is: %s\n", fullName);

    return 0;
}
