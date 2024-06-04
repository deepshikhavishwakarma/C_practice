#include <stdio.h>

int main()
{
    float sub1, sub2, sub3, sub4, sub5, avg;
    printf("Enter Marks of Subject 1: ");
    scanf("%f", &sub1);
    printf("Enter Marks of Subject 2: ");
    scanf("%f", &sub2);
    printf("Enter Marks of Subject 3: ");
    scanf("%f", &sub3);
    printf("Enter Marks of Subject 4: ");
    scanf("%f", &sub4);
    printf("Enter Marks of Subject 5: ");
    scanf("%f", &sub5);
    avg = (sub1 + sub2 + sub3 + sub4 + sub5) / 5;
    printf("%.2f\n", avg);
    if (avg >= 90)
    {
        printf("Grade A");
    }
    else if (avg >= 80)
    {
        printf("Grade B");
    }
    else if (avg >= 70)
    {
        printf("Grade C");
    }
    else if (avg >= 50)
    {
        printf("Grade D");
    }
    else if (avg < 50)
    {
        printf("Grade F");
    }
    else
    {
        printf("Fail,Better luck next time");
    }

    return 0;
}
