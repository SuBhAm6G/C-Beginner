#include<stdio.h>

int main(){
     int i,a=0;
     
     printf(" n=  ");
     
     scanf("%d", &i);
     do
     {
        printf("%d\n", a);
        a++;
     } while (a<=i);
     
     
    return 0;
}