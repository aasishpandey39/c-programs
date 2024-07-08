#include<stdio.h>

/* Contimue statement is used to immidiately move to the next
   iteration of the loop */

   int main(){
    int skip = 5, i = 0;
    while(i < 10){
        i++;
        if(i!=skip){
            continue; // skip the rest of the loop iteration
        }
        else{
           printf("%d\n", i); 
        }
    }
    return 0;
   }