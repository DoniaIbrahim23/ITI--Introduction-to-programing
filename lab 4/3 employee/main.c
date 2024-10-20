#include <stdio.h>

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
    printf("Name: %s, Net Salary: %.2f\n", emp.name, netSalary);
}

int main() {
    struct employee employees[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("SSN: ");
        scanf("%d", &employees[i].ssn);

         _flushall();

        printf("Name: ");
        scanf("%c", employees[i].name);

         _flushall();

        printf("Age: ");
        scanf("%d", &employees[i].age);

         _flushall();

        printf("Salary: ");
        scanf("%f", &employees[i].salary);

         _flushall();

        printf("Commission: ");
        scanf("%f", &employees[i].commission);

         _flushall();

        printf("Deduction: ");
        scanf("%f", &employees[i].deduction);
    }

    printf("\n");

    printf("Employee Details:\n");
    for (i = 0; i < 3; i++) {
        printEmployeeDetails(employees[i]);
    }

    return 0;
}
