#include <stdio.h>
int main()
{
    int count;
    for (int i = 100; i <= 999; i++)
    {
        count = 0;
        for (int j = 1; j <= i; j++)
        {

            if (i % j == 0)
                count++;
        }
        if (count == 2)
            printf(" %d", i);
    }
    return 0;
}