// Find the Largest Element
//   Find the Largest Element: Create a program that finds the largest element in an array of integers. Implement separate functions for input, finding the largest element, and main function to displaying the result.
//   Input as :
//   Enter array size : 6
//   Enter 6 elements : 5 6 3 6 7 9
//   Output as :
//   The largest element is : 9

#include <stdio.h>
void isLargest(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    printf("%d", arr[0]);
}

int main()
{
    int s;
    printf("Enter size of array: ");
    scanf("%d", &s);
    int a[s];
    printf("Enter %d values of array:", s);
    for (int i = 0; i < s; i++)
    {
        scanf("%d", &a[i]);
    }
    isLargest(a, s);
    return 0;
}
