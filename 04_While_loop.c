// Loops are use to repeat similar part efficiently.
/*
 While(condition is true){
    //code
    //code
    } 
     */
#include <stdio.h>

int main() {
    int n, i = 0;

    // Prompt the user to enter the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Print numbers from 0 to n using a while loop
    while (i <= n) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}