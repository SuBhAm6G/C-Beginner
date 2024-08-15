#include<stdio.h>
//Function prototype
     int sum(int x, int y);

     //Function defintion
     int sum(int x, int y){
        printf("The sum is %d\n", x+y);
        return x+y; //return value
     }
int main(){  //main function is entry point of a c programme
     
int v=67;
int b=56;
    int c= sum(v,b); //Function call; return value is returning sum to variable c
printf("%d\n",c);
     sum(89,78);
    return 0;
}