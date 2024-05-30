#include<stdio.h>
int main() {
 int m = 42;
 int r;
//-----------method 1----------------
//  int n = (m/10+1)*10;    //3*10=30
//  int o = (m/10)*10;      //2*10 = 20
//  int mod = m%10;
//  printf("%d", (mod>=5) ? n : o);


//-----------method 2----------------
r = (m/10+m%10/5)*10;//2+5
printf("%d", r);

return 0;    
}