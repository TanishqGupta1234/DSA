#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
}*Head;

// Function to create a circular linked list from an array
struct Node *create(int A[], int n) {
    struct Node *Head = NULL;
    struct Node *last = NULL;

    if (n <= 0)
        return NULL;

    Head = (struct Node *)malloc(sizeof(struct Node));
    if (Head == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }

    Head->data = A[0];
    Head->next = Head;
    last = Head;

    for (int i = 1; i < n; i++) {
        struct Node *t = (struct Node *)malloc(sizeof(struct Node));
        if (t == NULL) {
            printf("Memory allocation failed.\n");
            return NULL;
        }
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }

    return Head;
}

// Function to display a circular linked list
void Display(struct Node *h) {
    struct Node *temp = h;
    
    if (h == NULL)
        return;
    
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != h);
    
    printf("\n");
}

int Length(struct Node *p)
{
    int len=0;
    do
    {
        len ++;
        p=p->next;

    }while(p!=Head);
    return len;

    
}

int Delete(struct Node *p,int index)
{
    struct Node *q;
    int i,x;

    if(index <0 || index>Length(Head ))
       return -1;
    if(index==1)
    {
        while(p->next!=Head)p=p->next; 
        x=Head->data;
        if(Head==p)
        {
             free(Head);
             Head=NULL;
        }
        else 
        {
            p->next=Head->next;
            free(Head);
            Head=p->next;

        }
    } 
    else
    {
        for(i=0;i<index;i++)
        {
            p=p->next;
    
        q=p->next;
        p->next =q->next;
        x=q->data;
        free(q);
        }
        
    }
    return x;
}

int main() {
    int A[] = {2, 3, 4, 5, 6};
    struct Node *Head = create(A, 5);
    
    if (Head == NULL) {
        printf("Creation of circular linked list failed.\n");
        return 1;
    }

    Delete(Head,1);
    Display(Head);

    // You can perform other operations on the circular linked list here
    
    return 0;
}
