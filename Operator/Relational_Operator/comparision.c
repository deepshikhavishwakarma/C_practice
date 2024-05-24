#include<stdio.h>
void main(){
    printf("%d\n",100==100); //1
    printf("%d\n",1.1==1.1);//1
    printf("%d\n",1.0==1);  //1
    printf("%d\n",'a'=='A'); //0
    printf("%d\n","a"=="a"); //0
    //printf("%d\n","a"=='a'); //0
    printf("%d\n",'a'>'A');  //1
    printf("%d\n",'a'<='A'+32); //1
    printf("%d\n",5!=5);  //0
    printf("%d\n",0!='0'); //1


   printf("-------------------------------\n");
   printf("%d\n",5+3/2==4);  //0
   printf("%d\n",(5+3)/2==4); //1
   printf("%d\n",5-3+2==4);  //1
   printf("%d\n",5*3/2==2);  //0
   printf("%d\n",5/3*2==2);  //1
   printf("%d\n",5%3/2==1);  //1
   printf("%d\n",2+3*4+5==19);  //1
   printf("%d\n",2+3*4+5==25);  //0
   printf("%d\n",2+3*4+5==45);  //0
   printf("%d\n",(2+3)*(4+5)==45); //1

   printf("-------------------------------\n");
   printf("%d\n",5==3,7>3); //0 
   printf("%d, %d\n",5==3,  7>3); //0, 1
   printf("%d\n",5==3 || 7>3); //1
   printf("%d\n",5==3 && 7>3); //0
   printf("%d\n",3==3 || 7==3); //1
   printf("%d\n",'a'=='a' && 'b'>'B'); //1
   printf("%d\n",!('a'=='a')); //0

   //In && operation when left exp false, right exp not checked.
   //In || operation when left exp true, right exp not checked

   printf("-------------------------------\n");
   printf("%d\n",'a'=='a' && 1>=1 && 2!=2); //1 && 1 && 0 ==> 0
   printf("%d\n", 5>=2 || 7!=8 && 9<9);  // 1 || 1 && 0 ==> 0       here output should be 1 because && operator priority is higher then || operator priority.
   printf("%d\n", (5>=2 || 7!=8) && 9<9); // (1 || 0)&& 0 ==> 0
   printf("%d\n",5 && -5); // 1 && 1 ==> 1
   printf("%d\n", 0 || 'a'); // 0||1 ==>1
   printf("%d\n", 1.1 && 2.2); //1 && 1 ==>1
   printf("%d\n", 5.5 && 0); //1 && 0 ==>0
   printf("%d\n", !5.5>0 && !0==1); //0 && 1 ==>0
}