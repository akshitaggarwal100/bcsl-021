#include <stdio.h>

typedef struct emp
{
    int basic;
    int ta;
    int da;
    int allowances;
    int deductions;
    int gross;
    int net;
} emp;

int main()
{
    void displayPaySlip(emp empDetails);

    emp employees[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Basic, TA, DA, Allowance, Deductions: ");
        scanf("%d %d %d %d %d", &employees[i].basic,
              &employees[i].ta,
              &employees[i].da,
              &employees[i].allowances,
              &employees[i].deductions);

        employees[i].gross = employees[i].basic + employees[i].ta + employees[i].da + employees[i].allowances;
        employees[i].net = employees[i].gross - employees[i].deductions;
    }

    while (1)
    {
        int query;
        printf("\nEnter employee number to generate pay slip or -1 to quit: ");
        scanf("%d", &query);

        if (query == -1)
        {
            break;
        }

        displayPaySlip(employees[query - 1]);
    }

    return 0;
}

void displayPaySlip(emp empDetails)
{
    printf("Basic: %d\n", empDetails.basic);
    printf("+ Travel Allowance: %d\n", empDetails.ta);
    printf("+ Dearness Allowance: %d\n", empDetails.da);
    printf("+ Other Allowances: %d\n", empDetails.allowances);
    printf("+ Gross Salary: %d\n", empDetails.gross);
    printf("- Deductions: %d\n", empDetails.deductions);
    printf("+ Net Salary: %d\n", empDetails.net);
}