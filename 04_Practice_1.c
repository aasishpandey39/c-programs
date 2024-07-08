#include <stdio.h>

int main() {
    int n, i;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Print the multiplication table for the given number
    printf("Multiplication table for %d:\n", n);
    for (i = 1; i <= 10; ++i) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}