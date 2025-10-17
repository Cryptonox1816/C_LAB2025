#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100

// Structure to hold employee data
typedef struct {
    char name[50];
    float basicPay;
    float grossSalary;
} Employee;

int main() {
    Employee emp[MAX_EMPLOYEES];
    int i;

    // Input employee data
    for (i = 0; i < MAX_EMPLOYEES; i++) {
        printf("Enter name of employee %d: ", i + 1);
        scanf(" %[^\n]", emp[i].name);  // Read full name including spaces

        printf("Enter basic pay of %s: ", emp[i].name);
        scanf("%f", &emp[i].basicPay);

        // Calculate DA and gross salary
        float DA = 0.52 * emp[i].basicPay;
        emp[i].grossSalary = emp[i].basicPay + DA;
    }

    // Output employee name and gross salary
    printf("\n%-30s %s\n", "Employee Name", "Gross Salary");
    printf("--------------------------------------------------\n");
    for (i = 0; i < MAX_EMPLOYEES; i++) {
        printf("%-30s %.2f\n", emp[i].name, emp[i].grossSalary);
    }

    return 0;
}
