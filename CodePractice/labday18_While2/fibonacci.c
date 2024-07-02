#include <stdio.h>
int main()
{
    int a = 0;
    int b = 1;
    int c, n;
    printf("Enter number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        printf("%d ", a); // 0
        c = a + b;        // a=0 b=1 c=1
        a = b;            // a=1
        b = c;            // b=1
        n--;
    }

    return 0;
}