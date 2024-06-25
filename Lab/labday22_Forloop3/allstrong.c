#include <stdio.h>
int main()
{
    int num, rem, fac, sum, i;
    for (int i = 1; i <= 500; i++)
    {
        // num=145;//145
        sum = 0;
        num = i;
        while (num != 0)
        {
            rem = num % 10;
            fac = 1;
            while (rem > 0)
            {
                fac = fac * rem;
                rem--;
            }
            // fac=fac*rem;
            sum += fac;
            num = num / 10;
        }
        if (sum == i)

            printf("%d\n", sum);
    }

    return 0;
}