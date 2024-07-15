#include <stdio.h>
#include <string.h>
int isVowel(char ch)
{

    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char s[50], v[20];
    printf("Enter String\n");
    gets(s); // Aeroplane

    int len = strlen(s);
    int index = 0;
    // for(int i=0;a[i]!='\0';i++){
    for (int i = len - 1; i >= 0; i--)
    {
        if (isVowel(s[i]))
        {
            v[index++] = s[i];
        }
    }
    index = 0;
    for (int i = 0; i < len; i++)
    {
        if (isVowel(s[i]))
        {
            s[i] = v[index++];
        }
    }

    printf("%s", s);

    return 0;
}