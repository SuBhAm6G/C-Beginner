#include<stdio.h>

int main(){
     int n,i=1,r;

     

     printf(" The value of n is  ");
     scanf("%d", &n);

     do{
        int r=n*i;
        printf("%dX%d=%d\n",n,i,r);
        i++;
     } while(i<=20);
    return 0;
}