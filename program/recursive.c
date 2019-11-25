#include <stdio.h>

int fib(int);
int multiply(int, int);

int main() {
    for (int n = 2; n <= 21; n++) {

        printf("%3d: %ld\n", n, multiply(fib(n), fib(n - 1)));
    }
    return 0;
}

int fib(int n) {
    if (n == 1)
        return 1;

    return fib(n - 1) + fib(n - 2);
}

int multiply(int a, int b) {
    int result = 0;

    if (b == 0)
        return 0;

    return multiply(a + a, b - 1);
}
