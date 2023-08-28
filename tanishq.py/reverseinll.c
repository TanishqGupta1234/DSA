#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void Display(struct Node* p) {
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
}

struct Node* create(int A[], int n) {
    int i;
    struct Node *first = NULL, *last = NULL, *t;

    first = (struct Node*)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++) {
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
    
    return first;
}

struct Node* Reverse1(struct Node* p) {
    int *A, i = 0;
    struct Node* q = p;

    // Calculate the number of nodes in the list
    int count = 0;
    while (q != NULL) {
        count++;
        q = q->next;
    }

    A = (int*)malloc(sizeof(int) * count);
    q = p;
    i = count - 1;

    while (q != NULL) {
        A[i] = q->data;
        q = q->next;
        i--;
    }

    q = p;
    i = 0;

    while (q != NULL) {
        q->data = A[i];
        q = q->next;
        i++;
    }
    
    free(A);
    return p;
}

struct Node* Reverse2(struct Node* p) {
    struct Node *q = NULL, *r = NULL;

    while (p != NULL) {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }

    return q;
}

struct Node* Reverse3(struct Node* p) {
    struct Node *prev = NULL, *current = p, *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

int main() {
    int A[] = {10, 20, 40, 50, 60};
    struct Node* first = create(A, 5);
    
    printf("Original list: ");
    Display(first);
    
    first = Reverse3(first); // Reverse the list using Reverse3

    printf("\nReversed list: ");
    Display(first);

    // Uncomment and call other functions as needed.

    return 0;
}

