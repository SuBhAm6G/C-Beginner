#include<stdio.h>

int main(){

int n,i=2;
int itsprime=1;
     printf(" The value of ");
     scanf("%d", &n);
     if(n<2){
        itsprime=0;     
     }
     else{
     while (i<n)
     {
        if(n%i==0){
            itsprime=0;
            break;
        }
           else{ i++;}
        
     }
     }
// int n,i=2;
// int itsprime=1;
//      printf(" The value of ");
//      scanf("%d", &n);
//      if(n<2){
//         itsprime=0;     
//      }
//      else{
//         do
//         {
//             if(n%i==0){
//             itsprime=0;
//             break;
//         }
//         else{
//             i++;
//         }
//         } while (i<n);
        
//      }

     if(itsprime){
        printf("It's a Prime Number");
     }
     else{
        printf("It's not a Prime Number");
     }
    return 0;
}