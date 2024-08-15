#include<stdio.h>
//Function defintion
int change(int a);

//Function prototype

int change(int a) {
 a = 77;
 printf("%d\n",a);
return 0; }

int main(){
     
     int b=9;
     change(b);
     printf("%d",b);
    return 0;
}