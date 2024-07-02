#include <stdio.h>

int main()
{
    int s1, s2, s3;
    printf("Side 1: ");
    scanf("%d", &s1);
    printf("Side 2: ");
    scanf("%d", &s2);
    printf("Side 3: ");
    scanf("%d", &s3);
    if (((s1 + s2) > s3) && ((s1 + s3) > s2) && ((s2 + s3 > s1)))
    {
        printf("The triangle is valid");
    }
    else
    {
        printf("The triangle is not valid.");
    }

    return 0;
}
