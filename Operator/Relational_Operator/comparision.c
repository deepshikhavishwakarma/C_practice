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
  printf("-------------------------------\n");
  int a,b,c,d;
  a = printf("I ") || printf("you"); //I
  b = printf("Love ") && printf("Rashmika "); //Love Rashmika
  c = printf("Thank You") || printf("Good bye"); //Thank you
  d = printf("") && printf("I hate no one");
  printf("\n %d%d%d%d\n",a,b,c,d); //1110

  printf("-------------------------------\n");
  printf("") && printf("Hi\n");
  printf("Hello") || printf("Goodbye"); //Hello

 printf("\n-------------------------------\n");
  1 && printf("Hi\n"); //Hi
  0 && printf("Hello\n");
  -5 || printf("Hello Deep\n"); 
  printf("\n-------------------------------\n");
 a= printf("I\n");
 b= a* printf("Hate\n");
 c=a+b + printf("You\n");
 printf("%d%d%d\n",a,b,c);
  
  

}