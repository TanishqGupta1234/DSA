#include <stdio.h>

int x = 0;

int fun(int n) {
    if (n > 0) {
        // Perform some action here or add some logic inside the loop
        // For example: x += n; to accumulate the values of n
        return fun(n - 1);
    }
    return 0;
}

int main() {
    int n = 5; // Declare and initialize n
    x++; // Increment x before calling fun(5)
    int r = fun(n);
    printf("%d\n", r);

    x++; // Increment x before calling fun(5) again
    r = fun(n);
    printf("%d\n", r);

    return 0;
}
