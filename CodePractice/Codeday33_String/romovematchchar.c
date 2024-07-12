
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[50], s2[20];
    printf("Enter String\n");
    gets(s1); // Apple
    printf("Enter String\n");
    gets(s2); // Aeroplane
    int l1 = strlen(s1);
    int l2 = strlen(s2);
    for (int i = 0; i < l1; i++)
    {
        for (int j = 0; j < l2; j++)
        {
            if (s1[i] == s2[j])
            {
                for (int k = j; k < l2; k++)
                {
                    s2[k] = s2[k + 1];
                }
                j--;
                l2--;
            }
        }
    }
    printf("%s", s2);

    return 0;
}