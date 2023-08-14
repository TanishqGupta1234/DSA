#include <stdio.h>
#include <stdlib.h>

struct Term
{
    int coeff;
    int expo;
};

struct Poly
{
    int n;
    struct Term *terms;
};

void create(struct Poly *p) {
    int i;
    printf("ENTER THE NUMBER OF TERMS: ");
    scanf("%d", &p->n);
    p->terms = (struct Term*)malloc(p->n * sizeof(struct Term));
    printf("Enter terms:\n");
    for (i = 0; i < p->n; i++) {
        scanf("%d %d", &p->terms[i].coeff, &p->terms[i].expo);
    }
}

void display(struct Poly p) {
    int i;
    for (i = 0; i < p.n; i++) {
        printf("%dx^%d", p.terms[i].coeff, p.terms[i].expo);
        if (i < p.n - 1) {
            printf(" + ");
        }
    }
    printf("\n");
}
struct Poly *add(struct Poly *p1,struct Poly *p2){
    int i,j,k;

    struct Poly *sum;
    sum=(struct Poly*)malloc(sizeof(struct Poly));
    sum->terms=(struct Term *)malloc((p1->n+p2->n)*sizeof(struct Term));
    i=j=k=0;
    while(i<p1->n && j<p2->n){
        if(p1->terms[i].expo>p2->terms[j].expo){
             sum ->terms[k++]=p1->terms[i++];



        }
        else(p1->terms[i].expo < p2->terms[j].expo) {
             sum ->terms[k++]=p1->terms[j++];
              

    }
    else{
        sum->terms[k].expo=p1->terms[i].expo
        sum->terms[k++].coeff=p1->terms[i++].coeff+p2->terms[j++].coeff;

    }
    for(;i<p1->n;i++)sum->terms[k++]=p1->terms[i];
    for(;i<p2->n;j ++)sum->terms[k++]=p2->terms[j];
    sum->n=k;
    return sum;


} 

int main() {
    struct Poly p1,p2,*p3;
    create(&p1);
    create(&p2);
    p3=add(&p1,&p2);

    display(p1);

    free(p1.terms);
     // Don't forget to free the dynamically allocated memory
     printf("\n");
     display(p1);
     printf("\n");
     display(p2);
     printf("\n");
     display(*p3);
     


    return 0;
}
