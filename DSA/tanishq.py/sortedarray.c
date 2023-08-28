#include<stdio.h>
#include<stdlib.h>

struct Array
{
    int A[10]; // Array to store elements
    int size;  // Maximum size of the array
    int length; // Current length of the array
};

int isSorted(struct Array arr)
{
    int i;
    for (i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] > arr.A[i + 1])
            return 0; // Array is not sorted
    }
    return 1; // Array is sorted
}

void Display(struct Array arr)
{
    int i;
    printf("\nElements are: ");
    for (i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
    printf("\n");
}

int main()
{
    struct Array arr1 = {{2, 3, 9, 16, 18, 21, 28, 32, 35}, 10, 9};
    printf("%d\n", isSorted(arr1));
    Display(arr1);
    return 0;
}
