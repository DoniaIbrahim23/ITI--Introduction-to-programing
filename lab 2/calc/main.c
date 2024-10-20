#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1,num2,result;
    char operation,again;

    do{
        printf("please enter numeber1\n");
        _flushall();
        scanf("%lf",&num1);
        printf("please enter numeber2\n");
        _flushall();
        scanf("%lf",&num2);
        printf("please enter operator\n");
        _flushall();
        scanf("%c",&operation);
        switch(operation){
            case '+':
                result = num1 + num2;
                printf("sumation is %lf + %lf = %lf\n", num1,num2,result);
                break;
            case '-':
                result = num1 - num2;
                printf("subtraction is %lf - %lf = %lf\n", num1,num2,result);
                break;
            case '*':
                result = num1 * num2;
                printf("multiplication is %lf * %lf = %lf\n", num1,num2,result);
                break;
            case '/':
                result = num1 / num2;
                printf("division is %lf / %lf = %lf\n", num1,num2,result);
                break;
            }
        printf("\nif other operation enter y if not enter n \n");
        _flushall();
        scanf("%c",&again);
        }while(again == 'y');

    return 0;
}
