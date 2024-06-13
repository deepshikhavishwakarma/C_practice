#include<stdio.h>
void main(){
    int a=10, b=25;
    float c=5;
    a+=5;
    b*=4;
    c/=2;
    printf("a=%d, b=%d, c=%f",a,b,c);//a=15, b=100, c=2.500000

    a=10, b=25;
    a+=b+5;
    printf("a=%d, b=%d\n",a,b); //40, 25

    int d=50.2;
    a=10.2,b=25.5, 
    d+=b*=d-=7.3;
    printf("a=%d, b=%d, d=%d\n",a,b,d); //
}