/*

do{
//code;
//code;
}while(condition);

*/
/* while -> checks the condition nad then execute the code
   Do-While -> Execute the code and then check the condition */

#include<stdio.h>
 int main(){
    int i = 0;
    do{
        printf("The value of i is %d\n", i);
        i++;
    }while(i<=100);
    return 0;
 }