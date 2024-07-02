#include <stdio.h>
int main()
{
    int num;
    float sum = 1;
    printf("Input number of terms : ");
    scanf("%d", &num);
    printf("Harmonic Series: 1-");
    for (int i = 2; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            printf("1/%d+", i);
            sum -= 1.0 / i;
        }
        else
        {
            printf("1/%d-", i);
            sum += 1.0 / i;
        }
    }
    printf("\b\b \nsum of the series: %f", sum);

    return 0;
}