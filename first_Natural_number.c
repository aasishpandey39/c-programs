#include<stdio.h>

int main(){
    int n, i = 1;

    // Ask the user for the value of n
    printf("Enter the value of n\n");
    scanf("%d\n", &n);

    do{
        printf("The number is %d\n", i);
        i++;
    }
    while(i<=n){
    }

    return 0;


}