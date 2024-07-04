// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int a[3]={10,12,13};
  printf("%d bytes\n",sizeof(a));  //6 bytes
  printf("%d cells\n",sizeof(a)/sizeof(int)); //3 cells
  printf("%d cells\n",sizeof(a)/sizeof(a[0]));//3 cells
  
  // Finding Array address
  
  printf("a[0] cell address : %u\n",&a[0]);
  printf("a stored value : %u\n",a);
  printf("a address is : %u\n",&a);
  //we can use & in printf because array is implicit pointer that stores address and pointer also stores address of var.
  
  //Finding array cell no,address and value
  
  for(int i=0;i<3;i++){
      printf("a[%d] cell addr=%u, value=%d\n", i,&a[i],a[i]);
  }
  //value in float
  
  
  printf("\n");
  int a1[3]={20,22,23};  //Direct initialization of array element
  for(int i=0;i<3;i++){
      printf("a[%d] cell addr=%u, value=%.2f\n", i,&a1[i],a1[i]);
  }
  
   for(int i=0;i<3;i++){      //1st way to print array
      printf("%4d",a1[i]);
  }
  
  printf("\n");
  
  //int b[]={3,4,6,7};
  printf("Elements are: ");
  for(int i=0;i<3;i++){
      printf("%4d",i[a1]);  //2nd way to print array
  }
  
  
   printf("\n");
  
  int b[]={3};
  printf("Elements of b array are: ");
  for(int i=0;i<5;i++){
      printf("%6d",i[b]);  //3 gv gv gv gv
  }
  
   printf("\n");
  
  int b1[4]={9};
  printf("Elements of b array are: ");
  for(int i=0;i<4;i++){
      printf("%6d",i[b1]);  //9 0 0 0  
  }
  
  
   printf("\n");
  
//   int b2[4]={ };
//   printf("Elements of b array are: ");
//   for(int i=0;i<4;i++){
//       printf("%6d",i[b2]);  //0 0 0 0 
//   }
// we get error which is Initializer syntax error in fn main
  
  printf("\n");

//   int b3[4]={{1,2},{3,4}};
//   printf("Elements of b array are: ");
//   for(int i=0;i<4;i++){
//       printf("%6d",i[b3]);  //0 0 0 0 
//   }
  //too many initializer values or Initializer syntax error in fn main
 
   printf("\n");

int b3[4]={{1},{2},{3},{4}};
  printf("Elements of b array are: ");
  for(int i=0;i<4;i++){
      printf("%6d",i[b3]);  //1 2 3 4 
  }

printf("\n");
//   int b4[4]={{1},{2},{3},{4},{5}};
//   printf("Elements of b4 array are: ");
//   for(int i=0;i<4;i++){
//       printf("%6d",i[b4]);  
//   } //too many initializer values

printf("\n");
  int b4[4]={{1},2};
  printf("Elements of b4 array are: ");
  for(int i=0;i<4;i++){
      printf("%6d",i[b4]);    //1 2 0 0
  }
  
  //int b5[4]=9;
  //error syntax incomplete
  printf("\n");
  int b6[4]={'1','2','3','4'};
  printf("Elements of b6 array are: ");
  for(int i=0;i<4;i++){
      printf("%6d",i[b6]);    //49 50 51 52 //acsii values
  }
  
  
  printf("\n");
  int b7[4]={1.1,2.2,3.3,4.4};
  printf("Elements of b7 array are: ");
  for(int i=0;i<4;i++){
      printf("%6d",i[b7]);    //1 2 3 4
  }
  
  printf("\n");
  int b8[4]={1>3,4>2,33-3,40000};
  printf("Elements of b8 array are: ");
  for(int i=0;i<4;i++){
      printf("%6d",i[b8]);    //0   1  30 -25536 (65536-40000=25536)                  //false  true
  }
  
  printf("\n");
//   int b9[4]={1,2, ,4};
//   printf("Elements of b9 array are: ");
//   for(int i=0;i<4;i++){
//       printf("%6d",i[b9]);    //error: expected expression before ','
//   }
  
  int b10[4];
  printf("Elements of b10 array are: ");
  for(int i=0;i<4;i++){
      printf("%6d",i[b10]);    //gv gv gv gv
  }
  printf("\n");
  int b11[4];
  printf("Elements of b11 array are: ");
  for(int i=0;i<4;i++){
      printf("%6d",b11[i]);    //gv gv gv gv
  }
  
  printf("\n");
  int b12[4];
  b12[0]=9;
  printf("Elements of b12 array are: ");
  for(int i=0;i<4;i++){
      printf("%6d",b12[i]);    //9 gv gv gv
  }
  printf("\n");
  int b13[4]={1};
  b13[0]=9;
  printf("Elements of b13 array are: ");
  for(int i=0;i<4;i++){
      printf("%6d",b13[i]);    //9 0 0 0
  }
    return 0;
}