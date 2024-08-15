#include<stdio.h>

int main(){
     int a=0; int b=0;
     printf("the value of %d\n" , a&&b);
     printf("the value of %d\n", a||b);
     printf("the value of %d\n", !b);
     if(!b){  
        printf("yes");
     }
     else{
        printf("no");
     }
    return 0;
}