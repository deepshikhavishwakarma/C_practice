#include <stdio.h>

int main()
{
    int Home_Allowance = 10000;
    int Food_Allowance = 3000;
    int Travel_Allowance = 10000;
    char designation;
    int salary;
    float Totsal;
    printf("Enter Salary : ");
    scanf("%d", &salary);
    printf("Enter Type of Designation (developer as D/d,Trainer as T/t,Manager as M/m): ");
    scanf(" %c", &designation);
    if (designation == 'D' || designation == 'd')
    {
        Totsal = salary + Home_Allowance;//40000+10000==>50000
        
    }
    else if (designation == 'T' || designation == 't')
    {//sal=15000

        Totsal = salary + Home_Allowance + Food_Allowance;//15000+10000+3000==>28000
        
    }
    else if (designation == 'M' || designation == 'm')
    {

        Totsal = salary + Home_Allowance + Food_Allowance + Travel_Allowance;
        
    }
    else
    {
        printf("Invalid input");
    }
    if (Totsal > 40000)
        {
            Totsal = 0.10 * salary;
            Totsal = salary - Totsal;
            printf("%f", Totsal);
        }
        else
        {
            Totsal = 0.05 * salary;
            Totsal = salary - Totsal;
            printf("%f", Totsal);
        }

    return 0;
}