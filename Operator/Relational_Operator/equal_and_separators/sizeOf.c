#include<stdio.h>
#include<string.h>
void main(){
    int a;
    float b;
    char c;
    printf("%d ,%d,%d\n",sizeof(a),sizeof(b),sizeof(c));//4 4 1
    printf("%d ,%d,%d\n",sizeof(int),sizeof(float),sizeof(char));//4 4 1
    printf("%d ,%d,%d\n",sizeof(-5),sizeof(25),sizeof(43656));//4 4 4
    
    printf("%d ,%d,%d\n",sizeof(32768),sizeof(50000),sizeof(100000));//4 4 4
    printf("%d ,%d,%d\n",sizeof(32768u),sizeof(50000U),sizeof((unsigned)100000));//4 4 4
    printf("%d ,%d,%d\n",sizeof(100000u),sizeof(5l),sizeof(5L));//4 4 4
    printf("%d ,%d,%d\n",sizeof(100000u),sizeof(5l),sizeof(5L));//4 4 4
    //printf("%d ,%d,%d\n",sizeof(1f));
    //printf("%d ,%d,%d\n",sizeof(1f),sizeof((float)1),sizeof((char)1));//4 4 4
    //printf("%d ,%d,%d\n",sizeof((int)3.4),sizeof((unsigned)2.5),sizeof((long)1));//4 4 4
    //In C after 32767 every int is by default long int
    printf("----------------------------------\n");
    printf("%d, %d\n",sizeof(a),sizeof(1.1));//4,8
    printf("%d, %d\n",sizeof(1.1f),sizeof((float)1.1));//4,4
    printf("%d, %d\n",sizeof(1.1l),sizeof(1.1L));//12,12
    printf("%d, %d\n",sizeof((float)'a'),sizeof((float)10));//4,4
    printf("----------------------------------\n");
    printf("%d, %d, %d\n",sizeof(c),sizeof('a'),sizeof("a"));//1,4,2
    printf("%d, %d, %d\n",sizeof(a),sizeof(b),sizeof("Hyd"));//4,4,4
    printf("%d, %d, %d\n",sizeof("ab"+1),sizeof("ab")+1,sizeof("ab"));//4,4,3
    printf("%d, %d, %d\n",sizeof("1.23"),sizeof(1.1),sizeof(1.1)+1);//5,8,9
    printf("%d, %d, %d\n",sizeof("ab"),sizeof("1.23"),sizeof(1.1));//3,5,8
    printf("%d, %d, %d\n",sizeof(1.1),sizeof(1),sizeof(0));//8,4,4
    printf("%d, %d, %d\n",sizeof("23"),sizeof(23),sizeof('23'));//3,4,4
    printf("%d",1.5+1);




}