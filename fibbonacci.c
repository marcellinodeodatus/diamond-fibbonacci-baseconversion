#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int fib0 = 0;
    int fib1 = 1;

    if (n == 0) {
        printf("The value of F0 is: %d\n", fib0);
    } else if (n == 1) {
        printf("The value of F1 is: %d\n", fib1);
    } else {
        int fibn;
        int i;

        for (i = 2; i <= n; i++) {
            fibn = fib0 + fib1;
            fib0 = fib1;
            fib1 = fibn;
        }

        printf("The value of F%d is: %d\n", n, fibn);
    }

    return 0;
}
