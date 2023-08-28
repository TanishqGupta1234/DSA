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

int Delete(struct Array *arr, int index)
{
    int x = 0;
    int i;
    if (index >= 0 && index < arr->length)
    {
        x = arr->A[index];
        for (i = index; i < arr->length - 1; i++)
        {
            arr->A[i] = arr->A[i + 1];
        }
        arr->length--;
    }
    return x;
}

int main()
{
    struct Array arr1 = {{2, 3, 4, 5, 6}, 10, 5};
    printf("%d\n", Delete(&arr1, 0));
    Display(arr1);
    return 0;
}
