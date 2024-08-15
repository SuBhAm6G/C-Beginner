#include<stdio.h>

int main(){
     int i=5;
     printf("the value of i is %d\n", i);

     i=i+9;
     printf("the value of i is %d\n", i);

     i++;
      printf("the value of i is %d\n", i);
      ++i;
       printf("the value of i is %d\n", i);

        printf("the value of i is %d\n", i++);//i++ prints first then increment
         printf("the value of i is %d\n", ++i);//++i increments first
    return 0;
}