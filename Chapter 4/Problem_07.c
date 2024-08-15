#include<stdio.h>

int main(){
     int i=1;
     int r;
     int sum=0;

     do
     {
        r=8*i;
        sum+=r;
        i++;
     } while (i<=10);
     printf("%d",sum);
     
    return 0;
}