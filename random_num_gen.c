#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number;
    srand(time(0)); // time(0) returns the  time in seconds.
    number = rand()%100 + 1; // Generate random number between 1to 100
    printf("The number is %d", number);

    // keep running the loop until the number is guessed
    return 0;
}