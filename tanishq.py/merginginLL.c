#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* first = NULL;
struct Node* second = NULL;
struct Node* third = NULL;

void Display(struct Node* p) {
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
}

struct Node* create(int A[], int n) {
    int i;
    struct Node* last = NULL, *t;

    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = A[0];
    head->next = NULL;
    last = head;

    for (i = 1; i < n; i++) {
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }

    return head;
}

void concat(struct Node* p, struct Node* q) {
    third = p;
    while (p->next != NULL)
        p = p->next;
    p->next = q;
}

void merge(struct Node *p,struct Node *q)
{
    struct Node *last;
    if(p->data < q->data )
    {
        third=last=p;
        p=p->next;
        third ->next=NULL; 

    }
    else
    {
        third=last=q;
        q=q->next;
        third->next=NULL;

    }
    while (p && q)

    {
        if(p->data  < q->data)
        {
            last->next=p;
            last=p;
            p=p->next; 
            last->next=NULL;
             


        }
        else{
            last->next=q;
            last=q;
            q=q->next; 
            last->next=NULL;
            
        }

    }
    if()
    
}

int main() {
    int A[] = {10, 20,30, 40, 50,};
    int B[] = {5,15,25,35,45};
    
    first = create(A, 5);
    second = create(B, 5);

    concat(second, first);
    printf("CONCATENATED\n");
    Display(third);
    printf("\n\n");

    return 0;
}
