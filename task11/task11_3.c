#include <stdio.h>

typedef struct {
    float salary;
    float bonus;
    float deductions;
} Employees;

void total_val(Employees emp[], int size);

int main() {
    Employees employees[3];

    char *names[] = {"Ahmed", "Waleed", "Amr"};

    for (int i = 0; i < 3; ++i) {
        printf("Enter %s's Salary: ", names[i]);
        scanf("%f", &employees[i].salary);
        printf("Enter %s's Bonus: ", names[i]);
        scanf("%f", &employees[i].bonus);
        printf("Enter %s's Deductions: ", names[i]);
        scanf("%f", &employees[i].deductions);
    }

    total_val(employees, 3);

    return 0;
}

void total_val(Employees emp[], int size) {
    double totalValue = 0;
    for (int i = 0; i < size; i++) {
        totalValue += emp[i].salary + emp[i].bonus - emp[i].deductions;
    }
    printf("\n");
    printf("Total value Needed is: %.2lf\n", totalValue);
}




