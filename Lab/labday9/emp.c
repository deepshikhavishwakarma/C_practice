#include <stdio.h>
int main()
{
    int emp_id, sal;
    char name[50], desig[100];
    printf("Enter employee name: ");
    gets(name); // If we take scanf then we can't able to store space after name so that's why we use gets method for taking spaces between string.
    printf("Enter employee ID: ");
    scanf("%d", &emp_id);
    printf("Enter employee designation: ");
    scanf("%s", desig);
    printf("Enter employee salary: ");
    scanf("%d", &sal);

    printf("Employee Details\n");

    printf("Name: %s \n", name);
    printf("Employee ID: %d \n", emp_id);
    printf("Designation: %s \n", desig);
    printf("Salary:$ %.2f \n", (float)sal);
}