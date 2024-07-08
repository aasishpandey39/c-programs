/* Print n natural numbers in reverse form*/
#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d\n",&n);

    // Using for loop
    for(int i=n; i>=1; i--){
    printf("The value of i is %d\n", i);
}
return 0;
}