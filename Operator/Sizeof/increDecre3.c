#include<stdio.h>
void main(){
 int a,b,c,d;
 a=b=c=2;
 d=a++ >=2 && ++b != c++;
 printf("a=%d b=%d c=%d d=%d",a,b,c,d);//3 3 3 1
 printf("---------------------------------------------\n");
   d=a++ >=b++ || ++b != c++;//3 3 2 1
 printf("a=%d b=%d c=%d d=%d",a,b,c,d); 

//    ---3    ---3
 //  d=a++ !=b++ || ++b != c++;
 //       2 >= 2    Not checked
 //        1    
 // In Or operator if the left side is true then right side not checked.

 printf("---------------------------------------------\n"); 
  d=a++ !=b++ && ++b != c++;//3 3 2 0
 printf("a=%d b=%d c=%d d=%d",a,b,c,d); 

 printf("---------------------------------------------\n"); 

 a=0,b=1,c=2,d;
 d= a++ || ++b || --c;
 printf("a=%d b=%d c=%d d=%d",a,b,c,d);//1 2 1 2
 //    ->1      ->2
 // d= a++ || ++b || --c;
  //      0|| 1 
  //        1 -------not checked -----
  // if the left is true then right not checked in || opertor.

 printf("---------------------------------------------\n");  
 d= a++ && ++b && --c;
 printf("a=%d b=%d c=%d d=%d",a,b,c,d);//
 //   ->1    ->2  
 //d= a++ && ++b && --c;
 //    0  -------not checked----
 //      ------not checked----
 //0 1 2 0
  
 printf("---------------------------------------------\n"); 
 a=0,b=1,c=2,d;
 d= a++ && ++b || --c;
 printf("a=%d b=%d c=%d d=%d",a,b,c,d);//1 1 1 1
 //     =>1
 //  d= a++ && ++b || --c;
//     0 --not checked || --c=>1
//            0 || 1
    //     d=1 

 printf("---------------------------------------------\n");   
  d= a++ || ++b && --c;
 printf("a=%d b=%d c=%d d=%d",a,b,c,d);//1 2 1 1
 //     =>1             =>1
 //  d= a++ || ++b && --c;
//      0   ||(2)1 &&  1
//           1  ----not checked
    //     d=1 


 printf("---------------------------------------------\n");   
 a=0,b=0;
 b= a++ && printf("HI\n");
 printf("a=%d,b=%d",a,b);
 b= --a || printf("Hello\n"); 
 printf("a=%d,b=%d",a,b);
//    =>1
 //b= a++ && printf("HI\n");
 //   0---------not checking-- a=1,b=0

 // b= --a || printf("Hello\n");
 //    0       1 
 //      1 ----------Hello a=0,b=1
 
 printf("---------------------------------------------\n");   
 a=2;
 a = a++ + ++a;
 printf("a=%d\n",a);
 a=2;
 printf("a=%d\n",a++ + ++a);
//     =>3
 //a = a++ + ++a;     priority-> ++a, +,=, a++
 //    ++a = a=3     
 //    a=a+a==>3+3=6
 //a=6
// a++ ==>a=7

                                  //  =>3
//case 2: a=2         printf("a=%d\n",a++ + ++a);
//                                     2  +  4==>6
 printf("---------------------------------------------\n");   
 a=2;
//               =>  5    6         =>4    
 printf("%d, %d\n",a++ + ++a, ++a + a++);
 //                 4    6      3  +   3==>6
 //                 --10--  
 //printf excution is right to left but print left to right   10,7 
 
 printf("---------------------------------------------\n");   
 a=2;
 ++a + a++;
 printf("a=%d\n",a);
 
 //a=4
 printf("---------------------------------------------\n");   
 
 a=0;
 a="Deepshikha"+1;
 printf("a=%d\n",a); //4219082
 
 printf("---------------------------------------------\n");   
 printf("---------------------------------------------\n");   
 printf("---------------------------------------------\n");   
}