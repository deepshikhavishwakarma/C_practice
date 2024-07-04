#include <stdio.h>
int main()
{
    int a[10] = {3, 6, 7, 8, 3, 5, 4, 7, 5, 3};

    for (int i = 0; i < 10 - 1; i++)
    {
        int m = a[i];
        int loc = i + 1;
        for (int j = i + 1; j < 10; j++)
        {
            if (m > a[j])
            {
                m = a[j];
                loc = j;
            }
        }
        if (a[loc] < a[i])
        {
            int temp = a[loc];
            a[loc] = a[i];
            a[i] = temp;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}



//                                Complexity Analysis of Selection Sort

// Time Complexity: The time complexity of Selection Sort is O(N2) as there are two nested loops:

// One loop to select an element of Array one by one = O(N)
// Another loop to compare that element with every other Array element = O(N)
// Therefore overall complexity = O(N) * O(N) = O(N*N) = O(N2)

// Auxiliary Space: O(1) as the only extra memory used is for temporary variables while swapping two values in Array. The selection sort never makes more than O(N) swaps and can be useful when memory writing is costly. 

//                                     Advantages of Selection Sort Algorithm

// Simple and easy to understand.
// Works well with small datasets.

//                                 Disadvantages of the Selection Sort Algorithm

// Selection sort has a time complexity of O(n^2) in the worst and average case.

// Does not work well on large datasets.

// Does not preserve the relative order of items with equal keys which means it is not stable.


// Frequently Asked Questions on Selection Sort


// Q1. Is Selection Sort Algorithm stable?

// The default implementation of the Selection Sort Algorithm is not stable. However, it can be made stable. Please see the stable Selection Sort for details.

// Q2. Is Selection Sort Algorithm in-place?

// Yes, Selection Sort Algorithm is an in-place algorithm, as it does not require extra space.


