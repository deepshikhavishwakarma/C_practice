
#include <stdio.h>

int main()
{
    char a[20] = "Deepshikha";
    int i;
    for (i = 0; a[i] != '\0'; i++)
        ;
    printf("Length is  %d", i);

    return 0;
}