#include <stdio.h>
#include <stdlib.h>  // Include this header for malloc

// Define the Node structure
struct Node {
    int data;
    struct Node *next;
};

// Function to count nodes in the linked list
int count(struct Node *p) {
    int count = 0;
    while (p != NULL) {
        count++;
        p = p->next;
    }
    return count;
}

// Function to insert a node at a specific index
void insert(struct Node **first, int index, int x) {
    struct Node *t;
    
    if (index < 0 || index > count(*first)) {
        return;
    }
    
    t = (struct Node *)malloc(sizeof(struct Node));
    if (t == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    
    t->data = x;

    if (index == 0) {
        t->next = *first;
        *first = t;
    } else {
        struct Node *p = *first;
        for (int i = 0; i < index - 1; i++) {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}

// Function to create a linked list (Assuming you have a create function)
void create(int A[], int n) {
    // Implementation of your create function
}

// Function to display the linked list (Assuming you have a Display function)
void Display(struct Node *p) {
    // Implementation of your Display function
}

int main() {
    struct Node *first = NULL; // Initialize the linked list
    int A[] = {3, 5, 7, 8, 9, 7, 10};
    create(A, 7); // Assuming create initializes the linked list with given data
    
    insert(&first, 3, 10);
    Display(first);

    return 0;
}
 