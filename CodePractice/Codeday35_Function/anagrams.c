// Anagrams
// Implement a function to check if two strings are anagrams of each other.
// Sample Input
// Input:
// First string: listen
// Second string: silent
// Input:
// First string: hello
// Second string: world
// Sample Output
// The strings are anagrams.
// Output:
// The strings are not anagrams.


#include <stdio.h>
#include <string.h>
char isAnagrams(char s1[],char s2[])
{  int i,j,count=0;
   int l1=strlen(s1);
   int l2=strlen(s2);
   if(l1==l2){
   for (i = 0; s1[i] != '\0'; i++){
       for (j = 0; s2[j] != '\0'; j++){
           if(s1[i]==s2[j])count++;
       }
    }
    if(count==l1){
        printf("The strings are anagrams.");
    }else{
       printf("The strings are not anagrams.");
   }
   }
    
}
int main()
{
    char a[10],b[10];
    printf("Enter String a: ");gets(a);
    printf("Enter String b: ");gets(b);
    isAnagrams(a,b);
    return 0;
}