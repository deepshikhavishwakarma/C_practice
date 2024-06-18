#include <stdio.h>
int main()
{
    int Id = 1001;
    int userId, password;
    char username[30];
    int pass = 1010;
    printf("Enter your Id: \n");
    scanf("%d", &userId);
    printf("Enter your name: \n");
    scanf(" %s", username);
    switch (Id != userId)
    {
    case 0:
    {
        // printf("User Id is: %d",userId);
        printf("Enter your password: \n");
        scanf("%d", &password);
        if (pass == password)
            printf("User name is %s", username);
        else
            printf("Incorrect Password");
    }
    break;

    case 1:
        printf("Incorrect ID");
    }

    return 0;
}