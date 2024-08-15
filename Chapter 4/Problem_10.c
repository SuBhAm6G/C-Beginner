#include<stdio.h>

int main(){
     int p,i;
     int itsprime=1;
     printf(" The value of number is ");
     scanf("%d", &p);

     if(p<2){
        itsprime = 0;  
     }
     else{
        for ( i = 2; i<p; i++)
        {
            if(p%i==0){
                itsprime=0;
                break;
            }
            
        }

     }

     if(itsprime){
        printf("It's a Prime Number");
     }
     else{
        printf("It's not a Prime Number");
     }
    
    
    return 0;
}