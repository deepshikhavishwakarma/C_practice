
#include <stdio.h>

int main() {
    int n;
    float sum=0 ,avg;
    printf("How many number you want to add: \n");
    scanf("%d",&n);
    float a[n];
    for(int i=0;i<n;i++){
        scanf("%f",&a[i]);
    }
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    printf("Sum of the array element is: %f\n",sum);
    printf("Avg of the array element is: %.2f",sum/n);
    

    return 0;
}