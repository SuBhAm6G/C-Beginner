#include<stdio.h>

//Function defintion
void good_morning();
void good_afternoon();
void good_night();

//Function prototype
void good_morning() {
    printf("good morning\n");
}
void good_afternoon(){
    printf("good afternoon\n");
}
void good_night(){
    printf("good night\n");
}


int main(){
     good_morning();
     good_afternoon();
     good_night();
    return 0;
}