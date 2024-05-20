//Prog2  --------------swap with 3rd variable
#include<stdio.h>
void main(){
    int a = 10;
    int b = 5;
    int t = a;         //t = 10
    a = b;//  a=5 ,        a = 5
    b = t; //b = 10;
    printf("a = %d, b = %d\n", a, b);
}