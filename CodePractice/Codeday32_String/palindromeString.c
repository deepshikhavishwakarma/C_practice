
#include <stdio.h>

int main()
{
    char a[15], rev[15];
    int i, j = 0, t;
    printf("Enter String: \n");
    gets(a);
    for (i = 0; a[i] != '\0'; i++)
        ;
    while (i)
    {
        rev[j++] = a[--i];
    }
    // printf("rev is %s\n",rev);
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == rev[i])
        {
            //   t=1;
            printf("Palindrome String");
            break;
        }
        else
        {
            // t=0;break;
            printf("Not palindrome string");
            break;
        }
    }
    // if(t==1)printf("Palindrome String");
    // else printf("Not palindrome string");
    return 0;
}