#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any character: ");
    scanf(" %c", &ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        puts("Vowels");
        break;
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        puts("Vowels");
        break;
    default:
        puts("Consonant");
    }

    return 0;
}