#include<stdio.h>

int main(){
    int i = 0;
    do{
        printf("The value of i is %d\n",i);
        if(i==5){
            break; // Break statement is used to exit the loop when (i=4).
        }
        i++;
    }while(i<=10);

    return 0;
}