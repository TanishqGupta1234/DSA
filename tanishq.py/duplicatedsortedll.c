#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *first = NULL;

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

void Display(struct Node *p) {
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int isSorted(struct Node *p) {
    int x = -65536;

    while (p != NULL) {
        if (p->data < x)
            return 0;
        x = p->data;
        p = p->next;
    }

    return 1;
}

void Removeduplicate(struct Node *p)
{
    struct Node *q=p->next;
    while(q!=NULL)
    {
         if(p->data!=q->data)
           p=q;

    }
        else
        {
                {
        p->next=q->next;
        free(q);
    }
        }


int main() {
    int A[] = {10, 20,20, 40, 40, 50};
    create(A, 5);
    Display(first);
    printf("%s\n", isSorted(first) ? "Sorted" : "Not sorted");
    Removeduplicate(first);
    Display(first);
    printf("\n\n");

    
    return 0;
}
