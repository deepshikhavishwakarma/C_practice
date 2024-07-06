
#include <stdio.h>

int main()
{
    int n;
    printf("How many numbers you want to store in array: \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d values in array: \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    } // 10/2=5
    for (int i = 0; i < n / 2; i++)
    {
        printf("(%d %d)\n", a[i], a[n - 1 - i]);
    }
    if (n % 2 != 0)
    {
        printf("%d", a[n / 2]);
    }
    return 0;
}

//Second method if numbers are even


// #include <stdio.h>

// int main() {
//    int n;
//    printf("How many numbers you want to store in array: \n");
//    scanf("%d",&n);
//    int a[n];
//    printf("Enter %d values in array: \n",n);
//    for(int i=0;i<n;i++){
//        scanf("%d",&a[i]);
//    }           //10/2=5
//    for(int i=0;i<n;i++){
//         printf("(%d , %d) \n",a[i],a[n-1]);
//         n--;
//         }
//     return 0;
// }