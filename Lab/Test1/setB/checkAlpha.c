// Program 2 ( Point 5 )

// Write a C program to check whether an alphabet is vowel or consonant using if else. 

// Example

// Input
// Input character: a

// Output

// 'a' is vowel
// ----------------------

#include<stdio.h>
int main(){
    char alpha;
    printf("Enter any alphabet: ");scanf("%c",&alpha);
    if(alpha == 'a' || alpha == 'e' || alpha == 'o' || alpha == 'u' || alpha == 'i'){
        printf(" %c is Vowel",alpha);
    }else{
        printf(" %c is consonant",alpha);
    }
    return 0;
}