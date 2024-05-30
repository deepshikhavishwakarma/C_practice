#include <stdio.h>
int main()
{

    int a, b, c;
    printf("Enter value of a,b and c ");
    scanf("%d %d %d", &a, &b, &c);
    // if(a>b && a>c && b>c){
    //     printf("%d",a);
    // }
    // else{ printf("%d",b);}

    (a > b && a > c) && printf("a is biggest");
    (b > a && b > c) && printf("b is biggest");
    (c > b && c > a) && printf("c is biggest");
    return 0;
}