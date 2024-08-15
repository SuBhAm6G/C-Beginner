#include<stdio.h>

int main(){
    int i,f=1,a;
printf(" The value of a is ");
scanf("%d", &a);
     for ( i = 1; i <= a; i++)
     {
        f*=i;
     }
     printf("%d",f);
     
    return 0;
}