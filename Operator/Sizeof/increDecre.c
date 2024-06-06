#include<stdio.h>
void main(){
    printf("----------------Increment Decrement Operators[++/--]------------------\n");
    printf("They are used to increment.decrement a variable value by 1\n");

    int a=10,b=15;
    a++;//postfix increment
    b--;//postfix decrement
    printf("a value is %d,b value is %d\n",a,b);
    a=10;b=15;
    ++a;//prefix increment
    --b;//prefix decrement
     printf("a value is %d,b value is %d\n",a,b);
    a=10,b=15;
    printf("a value is %d,b value is %d\n",++a,--b);
    
    a=10,b=15;
    printf("a value is %d,b value is %d\n",a++,b--);

    printf("----------------------------------\n");
    int p=10, q;
    q=p++;
    printf("p value is %d,q value is %d\n",p,q);//11 10
    p=10;
    q=++p;
    printf("p value is %d,q value is %d\n",p,q);//11 11

    //postfix increment                           |         Prefix increment
    //p =10;                                      |        p=10
    //q=p++;                                      |        q=++p;
    //priority: =,p++                             |        priority: ++p,=
    //q=p==>q=10                                  |        1. ++p==>p=11
    //p++==>p=11 
    printf("----------------------------------\n");
    q=p--;
    printf("p value is %d,q value is %d\n",p,q);//10 11
    p=10;
    q=--p;
    printf("p value is %d,q value is %d\n",p,q);//9 9

    //postfix increment                           |         Prefix increment
    //p =10;                                      |        p=10
    //q=p++;                                      |        q=++p;
    //priority: =,p++                             |        priority: ++p,=
    //q=p==>q=10                                  |        1. --p==>p=9
    //p--==>p=9                                   |         2. q=p==>q=9
    printf("----------------------------------\n");
    int x=10,y;
    y=x--;
    printf("x value %d,y value %d\n",x,y);// 9 10
    y=--x;
    printf("x value %d,y value %d\n",x,y);// 8,8
    printf("----------------------------------\n");
    int z=10,s;
    //s=z+++;// error  expression syntax error
    printf("z value %d,s value %d\n",z,s);
    //s = ++++z;//error expression syntax error
    printf("z value %d,s value %d\n",z,s);

    printf("----------------------------------\n");
    a =1,b=0;
    b=a++ + a++ + a++;
    printf("a value %d,b value %d\n",a,b);//,4, 6
    a=1;
    b=++a + ++a + ++a;
    printf("a value %d,b value %d\n",a,b);//4,10
    printf("----------------------------------\n");
    a =1,b=0;
    b=++a + ++a * ++a;
    printf("a value %d,b value %d\n",a,b);//4,20
    a=1;
    b=++a + a-- + --a + a++;
    printf("a value %d,b value %d\n",a,b);//1,3







                                   

}