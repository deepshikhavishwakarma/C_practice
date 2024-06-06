#include<stdio.h>
void main(){
  int a = 8888;
  printf("a = %d\n", sizeof(a=10000));//4
  printf("a = %d\n", a);//8888
  printf("a = %d\n", sizeof(a=a+1));//4
  printf("a = %d\n", a);//8888
  printf("----------------------------------\n");

  //printf("%d\n",sizeof());//Expression syntax error
  printf("%d, %d,%d\n",sizeof(""),sizeof(" "),sizeof(" \0 "));//1,2,4
  printf("%d\n",printf("Deepshikha\0Vishwakarma"));//Deepshikha10
  printf("%d\n",printf("Deep\0shikha\0Vishwakarma"));//Deep4
  printf("%d\n",sizeof(1.1));//8
  printf("--------------& Address of the var , * pointer(stores add. of another var--------------------\n");
  a=100;
  int b=15;//var
  int *p,*q;//pointer variable
  printf("a value %d,b value %d\n",a,b);// a value 100,b value 15
  printf("a addr %u,b addres %u\n",&a,&b);// a addr 6422292,b addres 6422288
  p=&a;
  p=&b;
  printf("p value %u,q value %u\n",p,q);// p value 6422288,q value 2564096
  
}