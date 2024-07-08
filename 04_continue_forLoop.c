#include <stdio.h>

int main() {
    int n;

    // Ask the user for the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // For loop to print natural numbers, skipping the number 5
    for (int i = 1; i <= n; i++) {
        if (i == 5) {
            continue; // Skip the rest of the loop iteration when i is 5
        }
        printf("%d\n", i);
    }

    return 0;
}