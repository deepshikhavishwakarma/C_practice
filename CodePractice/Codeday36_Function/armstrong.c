#include <stdio.h>
#include <math.h>
isArmstrong()
{
    int rem, sum, l, cube = 0;
    for (int i = 100; i < 10000; i++)
    {
        int n = i;
        sum = 0;
        l = 0;
        while (n != 0)
        {
            n /= 10;
            l++;
        }
        n = i;
        while (n != 0)
        {
            rem = n % 10;
            sum += pow(rem, l);
            n /= 10;
        }
        if (sum == i)
        {
            printf("%d \n", i);
        }
    }
}
int main()
{
    isArmstrong();
    return 0;
}