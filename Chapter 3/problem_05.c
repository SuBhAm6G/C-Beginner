#include<stdio.h>

int main(){
    char ch;
     printf(" Enter character\t ");
     scanf("%c", &ch);
     int v=ch; //use ASCII VALUES
     if (v>=65 && v<=90){
        printf("It's Capital");
     }
     if (v>=97 && v<=122){
        printf("It's not a Capital");
     }
     else {
        printf("its not a letter");
     }
     
    return 0;
}