// Write a c program to print all the frequency of character present

// For Example:-

// String s=" Hello Everyone"

// Output as :-

// The frequency of H is 1

// The frequency of e is 3

// The frequency of l is 2

// The frequency of o is 2

// The frequency of   is 1  --------THIS IS FOP CHECKING THE SPACE COUNT

// The frequency of E is 1

// The frequency of v is 1

// The frequency of r is 1

// The frequency of y is 1

// The frequency of n is 1

#include <stdio.h>
int main()
{
    char a[20] = "madaMrwwrwtw#";
    int i, j;
    for (i = 0; a[i] != '\0'; i++)
    {
        int count = 1, v = 0;
        for (j = 0; a[j] != '\0'; j++)
        {
            if (a[i] == a[j] && i < j)
                count++;
            if (a[i] == a[j] && i > j)
                v++;
        }
        if (v == 0)
        {
            printf("The frequency of %c is %d\n ", a[i], count);
        }
    }

    return 0;
}

//----------------------------------second method----------------------------------------------------------------

// #include <stdio.h>
// int main() {
//    char a[20]="madaMrwwrwtw#";
//    int i,j;
//    for(i=0;a[i]!='\0';i++){
//        int count=1;
//        for(j=i+1;a[j]!='\0';j++){
//            if(a[i]==a[j]){
//                count++;
//                a[j]='*';
               
//            }
        
//         }
//         if(a[i]!='*'){
//             printf("The frequency of %c is %d\n ",a[i],count);
//         }
//    }
//     return 0;
// }