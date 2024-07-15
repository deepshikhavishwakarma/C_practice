// Write a C program to reverse Words of the Given String?

// Ex: Today is Monday

// Output: yadoT si yadnoM

#include <stdio.h>
#include <string.h>
int main()
{
    char s[50], v[20];

    printf("Enter String\n");
    gets(s); // Today is Monday
    int len = strlen(s);
    int z = 0; 
    for (int i = 0; i < len; i++)
    {
        int k = i;
        if (s[i] == ' ' || (i == (len - 1)))
        {
           
            while (k != (z - 1))
            {
                printf("%c", s[k--]);
            }
            z = i;
        }
    }

    return 0;
}
