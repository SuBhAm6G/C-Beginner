#include<stdio.h>

int main(){
     int S1,S2,S3,Total;
     printf(" S1 =  ");
     scanf("%d", &S1);
     printf(" S2 =  ");
     scanf("%d", &S2);
     printf(" S3 =  ");
     scanf("%d", &S3);

        Total=S1+S2+S3;

        if(Total>300 || S1>100 || S2>100 || S3>100) {
            printf("Please add valid marks");
        }

        else if(Total>=120 && S1>=33 && S2>=33 && S3>=33) {
            printf("You're passed");
        }
        else {
            printf("You're failed");
        }
    return 0;
}