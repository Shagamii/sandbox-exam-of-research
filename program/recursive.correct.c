#include <stdio.h>

int fib(int);
int multiply(int, int);

int main()
{
    for (int n = 2; n <= 20; n++)
    {
        printf("%3d: %d\n", n, multiply(fib(n), fib(n - 1)));
    }
    return 0;
}

int fib(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

int multiply(int a, int b)
{
    long int result = 0;
    if (b == 0)
        return 0;
    return a + multiply(a, b - 1);
}
