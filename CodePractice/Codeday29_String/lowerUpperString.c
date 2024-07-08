#include <stdio.h>

int main()
{

    printf("\n--------Lower to upper / Upper to lower:--------\n");
    char s[50];
    int i;
    printf("Enter Ur String ");
    gets(s); // if we use scanf then after space remaining string will not print
    for (i = 0; s[i] != '\0'; i++)
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32; // Strupr
        else if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32; // StrLwr

    printf("Converted String is %s\n", s);

    return 0;
}