#include<stdio.h>

int main(){
    int marks;
     printf(" Enter your marks =  ");
     scanf("%d", &marks);
      if(100>=marks && marks>=90){
        printf("Your grade is A");
      }
      else if(90>=marks && marks>=80){
        printf("Your grade is B");
      }
      else if(80>=marks && marks>=70){
        printf("Your grade is C");
      }
      else if(70>=marks && marks>=60){
        printf("Your grade is D");
      }
      else if(60>=marks && marks>=50){
        printf("Your grade is E");
      }
      else if(50>marks && marks>=0){
        printf("Your grade is F");
      }
      else{
        printf("Please put valid marks");
      }
    return 0;
}