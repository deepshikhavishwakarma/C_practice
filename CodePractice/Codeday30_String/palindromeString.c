
#include <stdio.h>

int main()
{
    char a[20] = "madaM", r[20];
    int i, j = 0, l;
    for (i = 0; a[i] != '\0'; i++);
    l = i;
    printf("Length %d \n", i);
    while (i)
    {

        r[j++] = a[--i];
    }
    // printf("%s\n %s",r,a);
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] != r[i])
        {
            printf("\nnot palindrome");
            return 0;
        }
    }
    printf("\npalindrome");
    return 0;
}