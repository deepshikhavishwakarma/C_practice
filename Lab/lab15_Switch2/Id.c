#include <stdio.h>
int main()
{
    int id;
    printf("Enter Id: ");
    scanf("%d", &id);
    switch (id)
    {
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    {
        printf("Software department");
        break;
    }
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    {
        printf("Developer department");
        break;
    }
    case 21:
    case 22:
    case 23:
    {
        printf("Management department");
        break;
    }
    default:
    {
        printf("Invalid Id");
    }
    }

    return 0;
}