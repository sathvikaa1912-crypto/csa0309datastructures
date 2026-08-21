#include <stdio.h>

// Recursive function to find factorial
long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;  // base case
    else
        return n * factorial(n - 1);  // recursive call
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Factorial of a negative number doesn't exist.\n");
    else
        printf("Factorial of %d = %lld\n", num, factorial(num));

    return 0;
}
