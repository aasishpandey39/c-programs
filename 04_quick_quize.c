#include<stdio.h>

int main(){
    int i = 0; // 0 se 9 tk ka value print nhi hoga because vo if condition k ander nhi jayga.
    while(i<=20){
        if (i>=10){ 
        printf("The value of i is %d\n", i);
    }
    i++; // i is incriment by 1
}
    return 0;
}