#include<stdio.h>

int main(){
     int a=17;int i;
     for ( i = 1; i <= a; i++)
     {
        if(i==9){
            // break;//exit the loop now
            continue; 
            }//skip this iteration now
        printf("%d\t",i);
     }
     
    return 0;
}