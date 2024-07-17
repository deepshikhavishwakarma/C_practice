
#include <stdio.h>
#include <string.h>
int main()
{
    char s[50];
    printf("Enter the first string");
    gets(s);
    printf("Enter the second string");
    char s1[50];
    gets(s1);
    int l = strlen(s);
    int l1 = strlen(s1);
    for (int i = 0; i < l; i++)
    {
        for (int j = i + 1; j < l; j++)
        {
            if (s[i] > s[j])
            {
                int t = s[i];
                s[i] = s[j];
                s[j] = t;
            }
            // if (s1[i] > s1[j])
            // {
            //     int t = s1[i];
            //     s1[i] = s1[j];
            //     s1[j] = t;
            // }
        }
    }
    for (int i = 0; i < l; i++)
    {
        if (s[i] != s1[i])
        {
            printf("Not Anagram");
            return 0;
        }
    }
    printf("Anagram ");
    return 0;
}