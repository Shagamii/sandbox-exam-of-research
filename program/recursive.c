#include <stdio.h>

long int fib(long int);
long int multiply(long int, long int);

int main()
{
    for (int n = 1; n <= 20; n++)
    {
        printf("%3d: %ld\n", n, multiply(fib(n), fib(n - 1)));
    }
    return 0;
}

long int fib(long int n)
{
    return fib(n - 1) + fib(n - 2);
}

long int multiply(long int a, long int b)
{
    if (b == 0)
        return 0;
    return multiply(a + a, b - 1);
}
