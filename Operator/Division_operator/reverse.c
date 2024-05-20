//WAP to print a 3 digit no in reverse order without using loops
#include<stdio.h>
#include<stdlib.h>
void main(){
    int n =123;
    printf("%d reverse is %d",n , n%10); // 123 reverse is 3
    n = n/10;
    printf("%d %d",n %10 ,n/10);