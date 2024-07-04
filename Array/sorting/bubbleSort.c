#include <stdio.h>
int main() {
    int a[10]={3,6,7,8,3,5,4,7,5,3};
    
    for(int i=0;i<10-1;i++){
        for(int j=i+1;j<10;j++)
        if(a[i]>a[j]){
           int temp=a[i];
           a[i]=a[j];
           a[j]=temp;        
        }
    }
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

// Time Complexity: O(N2)
// Auxiliary Space: O(1)

//                                                 Advantages of Bubble Sort:

// Bubble sort is easy to understand and implement.

// It does not require any additional memory space.

// It is a stable sorting algorithm, meaning that elements with the same key value maintain their relative order in the sorted output.

//                                         Disadvantages of Bubble Sort:

// Bubble sort has a time complexity of O(N2) which makes it very slow for large data sets.

// Bubble sort is a comparison-based sorting algorithm, which means that it requires a comparison operator to determine the relative order of elements in the input data set. It can limit the efficiency of the algorithm in certain cases.
// Some FAQs related to Bubble Sort:

// =============>   What is the Boundary Case for Bubble sort? 

// Bubble sort takes minimum time (Order of n) when elements are already sorted. Hence it is best to check if the array is already sorted or not beforehand, to avoid O(N2) time complexity.

// =============>   Does sorting happen in place in Bubble sort?

// Yes, Bubble sort performs the swapping of adjacent pairs without the use of any major data structure. Hence Bubble sort algorithm is an in-place algorithm.

// =============>   Is the Bubble sort algorithm stable?

// Yes, the bubble sort algorithm is stable.

// =============>   Where is the Bubble sort algorithm used?

// Due to its simplicity, bubble sort is often used to introduce the concept of a sorting algorithm. In computer graphics, it is popular for its capability to detect a tiny error (like a swap of just two elements) in almost-sorted arrays and fix it with just linear complexity (2n). 

// Example: It is used in a polygon filling algorithm, where bounding lines are sorted by their x coordinate at a specific scan line (a line parallel to the x-axis), and with incrementing y their order changes (two elements are swapped) only at intersections of two lines.