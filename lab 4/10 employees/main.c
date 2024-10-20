#include <stdio.h>
#include <stdbool.h>

struct employee {
    int ssn;
    char name[100];
    int age;
    float salary;
    float commission;
    float deduction;
};

float calculateNetSalary(struct employee emp) {
    return emp.salary + emp.commission - emp.deduction;
}

void printEmployeeDetails(struct employee emp) {
    float netSalary = calculateNetSalary(emp);
    printf("SSN: %d, Name: %s, Age: %d, Net Salary: %.2f\n", emp.ssn, emp.name, emp.age, netSalary);
}

int main() {
    struct employee employees[10];
    int index;
    char choice;


    for (int i = 0; i < 10; i++) {
        employees[i].ssn = 0;
    }
    do {
        printf("Enter index between 0->9: ");
        scanf("%d", &index);

        if (index < 0 || index >= 10) {
            printf("Invalid index. Please enter a number between 0 and 9.\n");
            continue;
        }

        if (employees[index].ssn != 0) {
            printf("Do you want to override (y/n)? ", index);
            scanf(" %c", &choice);

            if (choice != 'y' && choice != 'Y') {
                printf("Operation canceled. Please choose a different index.\n");
                continue;
            }
        }


        printf("Enter details for employee at index %d:\n", index);
        printf("SSN: ");
        scanf("%d", &employees[index].ssn);

        _flushall();

        printf("Name: ");
        scanf("%c", employees[index].name);
        _flushall();


        printf("Age: ");
        scanf("%d", &employees[index].age);
        _flushall();

        printf("Salary: ");
        scanf("%f", &employees[index].salary);
        _flushall();

        printf("Commission: ");
        scanf("%f", &employees[index].commission);
        _flushall();

        printf("Deduction: ");
        scanf("%f", &employees[index].deduction);
        _flushall();

        printf("Do you want to enter another employee? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Entered Employee Details:\n");
    for (int i = 0; i < 10; i++) {

        if (employees[i].ssn != 0) {
            printEmployeeDetails(employees[i]);
        }
    }

    return 0;
}
