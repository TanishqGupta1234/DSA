#include <stdio.h>
#include <stdlib.h>

// Define the Node structure
struct Node {
    int data;
    struct Node *next;
};

// Global variable to hold the first node of the linked list
struct Node *first = NULL;

// Function to create a linked list
void create(int A[], int n) {
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++) {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

// Function to display the linked list
void Display(struct Node *p) {
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

// Function to insert a node into a sorted linked list
void SortedInsert(struct Node **p, int x) {
    struct Node *t, *q = NULL;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    t->next = NULL;

    if (*p == NULL) {
        *p = t;
    } else {
        while (*p && (*p)->data < x) {
            q = *p;
            *p = (*p)->next;
        }
        if (*p == first) {
            t->next = first;
            first = t;
        } else {
            t->next = q->next;
            q->next = t;
        }
    }
}

int main() {
    int A[] = {10, 29, 39, 93, 45};
    create(A, 5);
    Display(first);

    SortedInsert(&first, 50);
    Display(first);

    return 0;
}
