#include<stdio.h>
//#include<stdlib.h>
void main(){
    //system("cls");
    printf("%d\n",sizeof(sizeof("Deepshikha"))); //4
    printf("%d %d\n",sizeof(100,1.2),sizeof(2.9,2)); //8 4
    printf("%d %d\n",sizeof("Deepshikha"), printf("Deepshikha")); //Deepshikha11 10
    printf("%d %d\n",sizeof(printf("Deepshikha")), printf("%d",sizeof("Deepshikha"))); //114 2
    printf("%d %d\n",sizeof(100+1.2),sizeof(1.2+100)); //8 8
    printf("%d",sizeof(4));
    int a=34;
printf("%d %d %d");
return 0;
}