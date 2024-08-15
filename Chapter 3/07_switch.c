#include<stdio.h>

int main(){
    int a;
     printf(" The value of a is = ");
     scanf("%d", &a);

     switch(a){
        case 1:
            printf("100\n");
break;
        case 2:
            printf("200\n");
break;
        case 3:
            printf("300\n");
break;
        case 4:
            printf("400\n");
break;
        default:
            printf("nothing");
     }
    return 0;
}