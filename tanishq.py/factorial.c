#include <stdio.h>

int fact(int n)
{
    if (n == 0)
        return 1;
    return fact(n - 1) * n;
}

int Ifact(int n)
{
    return fact(n);
}

int main()
{
    int r = Ifact(5);
    printf("%d ", r);

    return 0;
}
