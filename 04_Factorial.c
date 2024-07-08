#include <stdio.h>

int main() {
    int n;
    int factorial = 1;

    printf("Enter a positive integer\n");
    scanf("%d\n",&n);

    // Calculate the factorial of the number using for loop
    for(int i = 1; i <= n; i++) {
        factorial *= i;
    }

    // Print the result
    printf("Factorial of %d is: %d\n", n, factorial);

    return 0;
}