#include <stdio.h>

int main()
{
    int hrs, min, form;
    printf("Enter the hours(in 24-hour format: )");
    scanf("%d", &hrs);
    printf("Enter the minuites: ");
    scanf("%d", &min);

    if (hrs <= 12)
    {
        printf("The time is %d:%d AM", hrs, min);
    }
    else
    {
        form = hrs - 12;
        printf("The time is %d:%d PM", form, min);
    }
    return 0;
}
