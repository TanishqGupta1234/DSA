#include<stdio.h>
int main()
{
    int a;
    int b;
    char opt;
    printf("\t\t\t\t\t\t\tCALCULATOR\t\t\t\t\t\t\t\t\t\t");
    printf("PLEASE ENTER YOUR FIRST NUMBER");
    scanf("%d",&a);
    printf("PLEASE ENTER YOUR SECOND NUMBER");
    scanf("%d",&b);
    printf("NOW YOU CAN DO THE BASICS CODE");
    scanf("%c",&opt);
    switch(opt)
    {
        case 'A':
        printf("NOW YOU CAN DO ADDITION %d",a+b);
        break;
        case 'B':
        printf("NOW YOU CAN DO SUBTRACTION %d",a-b);
        break;
        case 'C':
        printf("NOW YOU CAN DO MULTIPLICATION %d",a*b);
        break;
        case 'D':
        printf("NOW YOU CAN DO DIVISION %d", a/b);
        break;

        

    }
    return 0;


}
