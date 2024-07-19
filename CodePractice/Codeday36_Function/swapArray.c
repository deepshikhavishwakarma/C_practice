// Swap elements
//   Program to swap all elements of two integer arrays using user define function in C.
//   Input as :
//   Enter array size : 6
//   Enter 6 elements for 1st array : 1 2 3 4 5 6
//   Enter 6 elements for 2nd array : 7 8 9 0 1 2
//   Output as :
//   After swapping :
//   1st array : 7 8 9 0 1 2
//   2nd array : 1 2 3 4 5 6

#include <stdio.h>
void isLargest(int arr1[], int arr2[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
    printf("After swaping 1st array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\nAfter swaping 2nd array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr2[i]);
    }
}

int main()
{
    int s;
    printf("Enter size of arrays: ");
    scanf("%d", &s);
    int a[s], b[s];
    printf("Enter %d values of 1st array:", s);
    for (int i = 0; i < s; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter %d values of 2nd array:", s);
    for (int i = 0; i < s; i++)
    {
        scanf("%d", &b[i]);
    }
    isLargest(a, b, s);
    return 0;
}
