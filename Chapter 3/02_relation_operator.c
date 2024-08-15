#include<stdio.h>

int main(){
     int age;
    printf(" The value of age is\t");
    scanf("%d", &age);
     if(age%5>1){//age after getting divided by 5, if remainder is greater than 1
     //for equality age%5==1 
        printf("yes");
     }
    return 0;
}