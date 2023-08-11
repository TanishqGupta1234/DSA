#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *create(int A[], int n) {
    struct Node *first = NULL;
    struct Node *last = NULL;
    
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++) {
        struct Node *t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }

    return first;
}

int Max(struct Node *p) {
    int max = INT32_MIN;
    while (p != NULL) {
        if (p->data > max)
            max = p->data;
        p = p->next;
    }
    return max;
}

int main() {
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    struct Node *first = create(A, 8);
    printf("Max: %d\n", Max(first));
    
    return 0;
}
