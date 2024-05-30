#include<stdio.h>
int main() {
  float c;
printf("Enter the value in cm : ");
scanf("%f",&c);
// float c = 15;
  float inch;
  inch= c/2.54;
  printf("%f cm is %f inches",c,inch);
return 0;
}