#include<stdio.h>
int main(){
   int s= 6000;                  //1hr ==3600s  1hr==60min
   int hr = s/3600;       // 1
   printf("%d\n",hr);
   
   int rsec=s%3600;                   //2400
   printf("%d\n",s);
   
   int min = rsec/60;  //40
   printf("%d\n",min);
   
   s=rsec%60; // 0
   printf("%d\n",s);
   
    printf("%d : hr %d min %d sec",hr,min,s);
   
   return 0;    
}