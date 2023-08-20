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

// Function to count nodes in the linked list
int count(struct Node *p) {
    int count = 0;
    while (p != NULL) {
        count++;
        p = p->next;
    }
    return count;
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

// Function to delete a node at a specific index
int Delete(struct Node **p, int index) {
    struct Node *q = NULL;
    int x = -1, i;

    if (index < 1 || index > count(*p)) {
        return -1;
    }
    if (index == 1) {
        q = *p;
        x = (*p)->data;
        *p = (*p)->next;
        free(q);
        return x;
    } else {
        for (i = 0; i < index - 1; i++) {
            q = *p;
            *p = (*p)->next;
        }
        q->next = (*p)->next;
        x = (*p)->data;
        free(*p);
        return x;
    }
}

int main() {
    int A[] = {10, 29, 39, 93, 45};
    create(A, 5);
    Display(first);
    
    Delete(&first, 4);

    SortedInsert(&first, 50);
    Display(first);

    return 0;
}
