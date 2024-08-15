#include<stdio.h>

int main(){
     int age;
    printf(" The value of age is\t");
    scanf("%d", &age);
     if(age>=80){
        printf("No, you're too old");
     }
     else if(age>18){ 
      printf("yes,you can");
     }
     else{
        printf("No");
     }
    return 0;
}