#include <stdio.h>

int main()
{
    char nation;
    char gender;
    int age;
    printf("Enter your Country: ");
    scanf("%c", &nation);
    if (nation == 'I' || nation == 'i')
    {
        printf("Enter your gender (M/F): ");
        scanf(" %c", &gender);
        printf("Enter your age: ");
        scanf("%d", &age);
        if ((gender == 'M' || gender == 'm') && (age >= 21 && age <= 50))
        {
            printf("Congratulation! you are eligible for marriage.");
        }
        else if ((gender == 'F' || gender == 'f') && (age >= 18 && age <= 45))
        {
            printf("Congratulation! you are eligible for marriage.");
        }
        else
        {
            printf("Sorry! you are not eligible for marriage.");
        }
    }
    else
    {
        printf("Sorry! you are not eligible for marriage.");
    }

    return 0;
}
