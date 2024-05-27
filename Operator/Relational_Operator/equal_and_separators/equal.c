#include <stdio.h>
#include <string.h>
void main()
{
    // int a = 1,2,3;//error //Declaration syntax error
    int a = (1, 2, 3);
    printf("a = %d\n", a); // 3
    printf("----------------------------\n");
    int b;
    b = 1, 2, 3;
    printf("b = %d\n", b); // 1
    printf("----------------------------\n");
    int c;
    c = 1, (2), 3;
    printf("c = %d\n", c); // 1
    printf("----------------------------\n");
    int d;
    d = (1, 2), (3, 4);
    printf("c = %d\n", d); // 2
    printf("----------------------------\n");
    int e;
    e = ((1, 2), (3, 4), 5), 6;
    printf("c = %d\n", e); // 5
    printf("----------------------------\n");
    int f;
    f = printf("Good "), printf("Morning");
    printf("%d\n", f); // Good Morning5
    printf("----------------------------\n");
    int g;
    g = printf("%d\n", printf("Hello Deep")); // Hello Deep10
    printf("%d", g);                          // 3
}