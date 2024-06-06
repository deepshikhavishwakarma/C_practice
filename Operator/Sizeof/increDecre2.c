#include <stdio.h>
void main()
{
    int a = 10;
    a++ / 2;
    printf("a=%d\n", a); // 11
    ++a / 2;
    printf("a=%d\n", a); // 12
    // priority: /, a++
    // 1. a/2==>10.2=5[5 not stored in a because of = not used i.e , a=10]
    //. a++==>a=11
    // p(a)==>11
    // priority: ++a,/
    //  ++a==>a=12
    // a/2==>12/2=6[6 not stored in a because of = not used i.e,a=12]
    // p(a)==>12
    printf("--------------------------------------\n");
    a = 10;
    a = a++ / 2;
    printf("a=%d\n", a); // 5
    a = ++a / 2;
    printf("a=%d\n", a); // 3
    printf("--------------------------------------\n");
    a = 20;
    printf("a=%d\n", a++ / 2); // 10
    printf("a=%d\n", ++a / 2); // 5
    printf("a=%d\n", a);       // 11
    printf("--------------------------------------\n");
    a=10;
    printf("a=%d\n", a++); //10
    printf("a=%d\n", ++a); //12
    printf("--------------------------------------\n");
    // printf("a=%d\n", 10++); //
    // printf("a=%d\n", ++10); // Lvalue required in function main
    printf("--------------------------------------\n");
    a =1;
    int b=19;
    a=a++ + ++b; //20
     printf("a=%d,b=%d\n", a,b);
    b= ++a + b++;//41
    printf("a=%d,b=%d\n", a,b);

    // a=1 b=1
    // a=a++ + ++b;
    // priority: ++b,+,=,a++
    // 1.++b==>20
    //2.a=a+b==>1+20
    // 3. a=21
    // 4.a++ ==>a=22
    // i.e a=22,b=20

    // a=22,b=20-------------------------->
    // b=++a + b++;
    // priority: ++a,+,=,b++
    // 1. ++a ==>a=23
    // 2. b=a+b==>23+20==>43
    // 3.b=43
    // 4.b++==>44

    printf("--------------------------------------\n");
    a=1;
    printf("%d,%d,%d,%d,%d\n",++a,a++,a--,--a,++b);
    a=25;
    printf("%d\n",++a,a=30);
    printf("%d,%d,%d\n",++a,a=printf("Thank You\n",a=50));
    printf("%d,%d,%d\n",a=a++,a,++a);
    printf("--------------------------------------\n");
    a=1;
    b = 7;
    int c = 0;
    printf("%d\n",b);
    //c = (a++ + ++b)++;//1+3==>4++ 4 is a content and we can't ++ the constant value
    //We can't perform ++/-- on expressions because of expression result always constant
    c=a+++b;
    printf("a=%d,b=%d,c=%d\n",a,b,c);//2,7,8

    printf("--------------------------------------\n");
    c=a+++b;
    printf("a=%d,b=%d, c=%d\n",a,b,c);
    a=1,b=2,c=0;
    a=a+++b++;
    printf("a=%d,b=%d, c=%d\n",a,b,c);
    printf("--------------------------------------\n");

}