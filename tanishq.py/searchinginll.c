#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *Lsearch(struct Node *p, int key) {
    while (p != NULL) {
        if (key == p->data) {
            return p;
        }
        p = p->next;
    }
    return NULL;
}

struct Node *create(int arr[], int n) {
    struct Node *head = NULL;
    struct Node *temp = NULL;

    head = (struct Node *)malloc(sizeof(struct Node));
    head->data = arr[0];
    head->next = NULL;
    temp = head;

    for (int i = 1; i < n; i++) {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = arr[i];
        newNode->next = NULL;
        temp->next = newNode;
        temp = newNode;
    }

    return head;
}
struct Node *RSearch(struct Node *p,int key){

    struct Node *q;
    while(p!=NULL)
    {
        if(key==p->data){
            q->next=p->next;
            p->next=first;
            first=p;
        }
    }
    if(p==NULL ){
        return NULL;
    if(key==p->data) {
        return p;
    }
    return RSearch(p->data,key);
    }
}

int main() {
    struct Node *first; // Declare the first node of the linked list
    struct Node *temp;
    int A[] = {3, 5, 6, 7, 8, 9, 10, 13};
    first = create(A, 8); // Assign the result of create() to first

    temp = Lsearch(first, 25);
    if (temp) {
        printf("Key is found: %d\n", temp->data);
    } else {
        printf("Key not found.\n");
    }
    Display(first);
    return 0;
}
 