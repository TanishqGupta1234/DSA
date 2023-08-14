#include <stdio.h>

int fun(int n)
{
    static int x = 0;
    if (n > 0)
    {
        return fun(n - 1) + x;
    }
    return 0;
}

int main()
{
    static int x = 0; // If you want x to be static in main, you can declare it here as well.

    x++; // Increment x before calling fun(5)
    int r = fun(5);
    printf("%d\n", r);

    x++; // Increment x before calling fun(5) again
    r = fun(5);
    printf("%d\n", r);

    return 0;
}

