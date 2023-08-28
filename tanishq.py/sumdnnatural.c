#include <stdio.h>

int sum(int n)
{
    if (n == 0)
        return 0;
    return sum(n - 1) + n;
}

int Isum(int n)
{
    return sum(n);
}

int main()
{
    int r = Isum(5);
    printf("%d ", r);

    return 0;
}
