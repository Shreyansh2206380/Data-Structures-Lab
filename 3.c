#include <stdio.h>
struct Employee
{
    int empId;
    char name[50];
    char designation[50];
    float basicSalary;
    float hraPercentage;
    float daPercentage;
};
float calculateGrossSalary(float basicSalary, float hraPercentage, float daPercentage)
{
    float hra = (hraPercentage / 100) * basicSalary;
    float da = (daPercentage / 100) * basicSalary;
    return basicSalary + hra + da;
}
int main()
{
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct Employee employees[n];
    for (int i = 0; i < n; i++)
    {
        printf("Employee %d:\n", i + 1);
        employees[i].empId = i + 1;
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Designation: ");
        scanf("%s", employees[i].designation);
        printf("Basic Salary: ");
        scanf("%f", &employees[i].basicSalary);
        printf("HRA Percentage: ");
        scanf("%f", &employees[i].hraPercentage);
        printf("DA Percentage: ");
        scanf("%f", &employees[i].daPercentage);
    }
    printf("\nEmployee Information with Gross Salary:\n");
    printf("Emp-ID\tName\tDesignation\tBasic Salary\tHRA%%\tDA%%\tGross Salary\n");
    for (int i = 0; i < n; i++)
    {
        float grossSalary = calculateGrossSalary(employees[i].basicSalary, employees[i].hraPercentage, employees[i].daPercentage);
        printf("%d\t%s\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n", employees[i].empId, employees[i].name, employees[i].designation, employees[i].basicSalary, employees[i].hraPercentage, employees[i].daPercentage, grossSalary);
    }
    return 0;
}
