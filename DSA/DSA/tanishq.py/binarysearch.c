#include <stdio.h>

struct Array
{
    int A[10]; // Array to store elements
    int size;  // Maximum size of the array
    int length; // Current length of the array
};

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

int BinarySearch(struct Array arr, int key)
{
    int l, mid, h;
    l = 0;
    h = arr.length - 1;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr.A[mid])
        {
            return mid;
        }
        else if (key < arr.A[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}

int main()
{
    struct Array arr1 = {{2, 3, 9, 16, 18, 21, 28, 32, 35}, 10, 9};
    printf("%d\n", BinarySearch(arr1, 16));
    Display(arr1);
    return 0;
}
