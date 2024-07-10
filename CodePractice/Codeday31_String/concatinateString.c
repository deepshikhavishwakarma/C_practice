#include <stdio.h>
int main()
{
    int i, j;
    char a[20] = "Naresh";
    char b[10] = "It";
    char c[20];

    for (i = 0; a[i] != '\0'; i++)
    {
        c[i] = a[i];
    }
    for (j = 0; a[j] != '\0'; j++)
    {
        c[i++] = b[j];
    }
    printf("%s", c);

    return 0;
}