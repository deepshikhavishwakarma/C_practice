
#include <stdio.h>

int main()
{
    char a[15];
    int i, j;
    printf("Enter String: \n");
    gets(a);
    for (i = 0; a[i] != '\0'; i++)
    {
        int count = 1;
        for (j = i + 1; a[j] != '\0'; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                a[j] = '0';
            }
        }
        if (a[i] != '0')
            printf("%c%d", a[i], count);
    }

    return 0;
}