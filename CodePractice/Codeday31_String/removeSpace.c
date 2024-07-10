// remove all the Spaces from a given String.

// Write a C program to remove all the Spaces from a given String.


// Input as : 

// Enter a String : Black cat on a mat


// Expected output : Blackcatonamat

#include <stdio.h>
int main() {
   int i;
   char a[50]="Bookstore is open today";
   char c;
  // printf("Enter the character you want to remove: ");scanf("%c",&c);
   
   for(i=0;a[i]!='\0';i++)
   {
       if(a[i]!=' ')printf("%c",a[i]);
       
   }
    
    return 0;
}