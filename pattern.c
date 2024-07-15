#include <stdio.h>

int main() {
    int n = 4;  // Number of rows
    int num = 1;
    
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        
        // Print numbers
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        
        // Move to the next line
        printf("\n");
    }
    
    return 0;
}