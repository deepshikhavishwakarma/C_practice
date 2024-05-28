#include <stdio.h>
int main()
{
    char a, b;
    printf("Enter a character:");
    scanf("%c %c", &a, &b);
    //   printf("\nEnter a character 2:");
    //   scanf("%c",&b);

    printf("\n ASCII value of a is : %d", a);
    printf("\n ASCII value of b is : %d", b);
    printf("\n ASCII value of a & b is : %d", a + b);
}