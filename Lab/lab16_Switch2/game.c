#include <stdio.h>
int main()
{
    char nameA[30], nameB[30];
    int scoreA, scoreB;
    printf("Enter your name: \n");
    scanf("%s", nameA);
    printf("Enter your score: \n");
    scanf("%d", &scoreA);
    printf("Enter your name: \n");
    scanf("%s", nameB);
    printf("Enter your score: \n");
    scanf("%d", &scoreB);

    switch (scoreA < scoreB)
    {
    case 0:
        printf("Winner is %s", nameA);
        break;
    case 1:
        printf("Winner is %s", nameB);
    }

    return 0;
}