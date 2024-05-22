#include<stdio.h>
int main() {
 int m = 23;
 int n = (m/10+1)*10;    //3*10=30
 int o = (m/10)*10;      //2*10 = 20
   
   int mod = m%10;
 printf("%d\n",mod);
return 0;    
}