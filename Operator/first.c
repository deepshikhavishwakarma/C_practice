#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>  // Include this header for system()
void main(){
    int a;  //declaration
    float b;
    char c;
    //clrscr(); The Clrscr() function is not a standard C function. It is specific to certain compilers like Turbo C, which is quite old and not commonly used anymore. In modern compilers like GCC, this function does not exist.

    
    system("cls"); // Clear the screen    If you want to clear the screen, you can use system("clear") for Unix-based systems or system("cls") for Windows, though using system is generally not recommended for portability and security reasons.
    a =10; //initialization
    b = 1.2;
    c='X';
    printf("a = %d, b = %f, c = %c\n", a, b, c);
}