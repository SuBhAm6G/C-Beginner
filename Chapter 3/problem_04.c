#include<stdio.h>

int main(){
    printf("This software will tell you if the year is leap year or not\n");
    int a;

    getchar();//it'll pause the program until i hit enter

     printf(" Enter Year =  ");
     scanf("%d", &a);

     if(a%400==0){
        printf("Yes");
     }
     else if(a%100==0){
        printf("No");
     }
     else if(a%4==0){
        printf("Yes");
     }
     else {
        printf("No");
     }
    return 0;
}