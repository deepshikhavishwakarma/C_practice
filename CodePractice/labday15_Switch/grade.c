#include <stdio.h>
int main()
{
    int ph, che, math, comp, bio, tot, avg;
    printf("Enter Marks of Physics: \n");
    scanf("%d", &ph);
    printf("Enter Marks of Chemistry: \n");
    scanf("%d", &che);
    printf("Enter Marks of Maths: \n");
    scanf("%d", &math);
    printf("Enter Marks of Computer: \n");
    scanf("%d", &comp);
    printf("Enter Marks of Biology: \n");
    scanf("%d", &bio);
    tot = ph + che + math + comp + bio;
    avg = tot / 5;
    printf("%d %d\n", tot, avg);
    switch (avg)
    {
    case 100:
    case 99:
    case 98:
    case 97:
    case 96:
    case 95:
    case 94:
    case 93:
    case 92:
    case 91:
    case 90:
    {
        printf("Grade A");
        break;
    }
    case 89:
    case 88:
    case 87:
    case 86:
    case 85:
    case 84:
    case 83:
    case 82:
    case 81:
    case 80:
    {
        printf("Grade B");
        break;
    }
    case 79:
    case 78:
    case 77:
    case 76:
    case 75:
    case 74:
    case 73:
    case 72:
    case 71:
    case 70:
    {
        printf("Grade C");
        break;
    }
    case 69:
    case 68:
    case 67:
    case 66:
    case 65:
    case 64:
    case 63:
    case 62:
    case 61:
    case 60:
    {
        printf("Grade D");
        break;
    }
    case 59:
    case 58:
    case 57:
    case 56:
    case 55:
    case 54:
    case 53:
    case 52:
    case 51:
    case 50:
    case 49:
    case 48:
    case 47:
    case 46:
    case 45:
    case 44:
    case 43:
    case 42:
    case 41:
    case 40:
    {
        printf("Grade E");
        break;
    }
    default:
    {
        printf("Grade F");
    }
    }

    return 0;
}