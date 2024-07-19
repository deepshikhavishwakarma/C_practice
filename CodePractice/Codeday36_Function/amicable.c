// Amicable Numbers:

//   Write a program to find and display all pairs of amicable numbers within a given range, by using different user defined functions.
//   Amicable numbers are pairs of numbers where the sum of the proper divisors of one number is equal to the other number.
//   Example :
//   -> a = 220
//     The divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55, and 110 excluding itself.
//     The sum of these divisors is 284: 1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284.
//   -> b = 284
//     The divisors of 284 are 1, 2, 4, 71, and 142 excluding itself.
//     The sum of these divisors is 220: 1 + 2 + 4 + 71 + 142 = 220.
//   So, (220, 284) is a pair of amicable numbers.
//   Amicable pairs between 100 and 10000 are:
//   (220, 284)
//   (284, 220)
//   (1184, 1210)
//   (1210, 1184)
//   (2620, 2924)
//   (2924, 2620)
//   (5020, 5564)
//   (5564, 5020)
//   (6232, 6368)
//   (6368, 6232)

#include <stdio.h>
void isAmicable(){ 
    
    for(int z=100;z<10000;z++){
     int num=z;
     int divi1=0,divi2=0;
     for(int i=1;i<=num/2;i++){
     if(num%i==0){
         divi1+=i;
     }
     }
    for(int i=1;i<=divi1/2;i++){
     if(divi1%i==0){
         divi2+=i;
     }
    }
     if(divi2==num){
          if(num!=divi1){
             printf("%d %d \n",num,divi1);}
     }
     }
     
    }

int main(){
     isAmicable();
    return 0;
}
