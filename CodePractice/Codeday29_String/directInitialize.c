#include <stdio.h>

int main()
{
    char a[20] = "Jai Shree Ram "; // Direct Initialization
    printf("%s \n", a);
    puts(a);
    printf(a);
    printf("\n---------------------------------------\n");

    char b[20] = "Jai\tShree\nRam\0Ravan";
    puts(b); // after null char it will not print anything.
    printf("\n---------------------------------------\n");

    char s1[2] = "D", s2[] = "D", s3[2] = {'D'}, s4[] = {'d', '\0'}, s5[] = {'D'};
    puts(s1);
    puts(s2);
    puts(s3);
    puts(s4);
    puts(s5);

    printf("\n-----------STORING MULTIPLE STRINGS---------------\n");

    char s[5][20] = {"Deep", "Deepali", "Deepu", "Deepshikha", "Vishwakarma"};
    puts("Names: \n*******************************\n");
    for (int i = 0; i < 5; i++)
        puts(s[i]);

    printf("\n--------Reading and printing a string:--------\n");
    char s6[50];
    printf("Enter Ur Name: ");
    gets(s6); // if we use scanf then after space remaining string will not print ;
    printf("My name is %s\n", s6);
    puts("My name is ");
    puts(s6);

    // gets(): It reads the string with spaces until pressing enter key.
    // puts():It prints the given string with \n. they doesn’t need any conversion char or
    // format specifiers. Hence they are called unformatted functions. Both belongs to <stdio.h>

    printf("\n--------Scan set / Magic characters: --------\n");

    char s7[50];
    printf("Enter your city: ");
    scanf("%[^\n]", s7);
    printf("My city is: ");
    puts(s7);

    char s8[50];
    printf("Enter your city: ");
    scanf("%[^.]", s8); // until we don't press . it will take string by user.
    printf("My city is: ");
    puts(s8);

    char s9[50];
    printf("Enter your Fav song: ");
    scanf("%[^@#$]", s9);
    printf("My Fav song is: ");
    puts(s9);

    return 0;
}