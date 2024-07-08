#include <stdio.h>

int main()
{

    char s[50];
    int i;
    printf("Enter Ur String ");
    gets(s); // if we use scanf then after space remaining string will not print
    for (i = 0; s[i] != '\0'; i++)
        puts(s + i);

    return 0;
}

// let address - 65500  501  502  503
//                a      b    c    \0
// for(i=0;s[i]!='\0';i++)puts(s+i);
//                            65500+0*1=65500 to \0==>abc
//                            65501+1*1=65501 to \0==>bc
//                            65502+2*1=65502 to \0==>c
//                            65503+3*1=65503 to \0!=0==>False

// o/p  Deepshikha
// eepshikha
// epshikha
// pshikha
// shikha
// hikha
// ikha
// kha
// ha
// a