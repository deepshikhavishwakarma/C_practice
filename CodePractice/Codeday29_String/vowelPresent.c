#include <stdio.h>

int main()
{
    char a[20] = "Rythm";
    int i, v, c;
    for (v = c = i = 0; a[i] != '\0'; i++)
    {
        if ((a[i] >= 65 && a[i] <= 122) || (a[i] >= 97 && a[i] <= 122))
        {
            if (a[i] == 'a' || a[i] == 'A' || a[i] == 'E' || a[i] == 'e' || a[i] == 'I' || a[i] == 'i' || a[i] == 'O' || a[i] == 'o' || a[i] == 'u' || a[i] == 'U')
                v++;
            else
                c++;
        }
    }
    if (v > 0)
        printf("This String contains vowel.");
    else
        printf("This String is not containing vowel.");

    return 0;
}