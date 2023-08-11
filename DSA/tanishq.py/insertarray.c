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

void Append(struct Array *arr, int x)
{
    if (arr->length < arr->size)
    {
        arr->A[arr->length++] = x;
    }
}

void Insert(struct Array *arr, int index, int x)
{
    int i;
    if (index >= 0 && index <= arr->length)
    {
        for (i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}

int main()
{
    struct Array arr1 = {{2, 3, 4, 5, 6}, 10, 5};
    Append(&arr1, 10);
    Insert(&arr1, 0, 12);
    Display(arr1);
    return 0;
}
