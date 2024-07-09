#include <stdio.h>

int main()
{

    printf("\n--------Reading and printing a string:--------\n");
    char s[50];
    int i;
    printf("Enter Ur String ");
    gets(s); // if we use scanf then after space remaining string will not print
    for (i = 0; s[i] != '\0'; i++); // strlen

    printf("Length is %d\n", i);
    puts("Reverse ");
    while (i)
        printf("%c", s[--i]);

    return 0;
}