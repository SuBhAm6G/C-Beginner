#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int random_number;
    int guessed;
    int no_of_guesses=0;
    srand(time(0));//seeding random number
    random_number = rand()%100 + 1; // Generates a random number between 1 and 100 and +1 changes range from 0-99 to 1-100
    

    do
    {
        
        printf("Guess the number = ");
        scanf("%d", &guessed);

        if (guessed>random_number){
            printf("Lower number please");
        }
        else if (guessed<random_number){
            printf("Higher number please");
        }
        else{
            printf("Congratulations, ");
        }
        no_of_guesses++;
        
    } while (guessed!=random_number);

    printf("The no. of guesses you took %d",no_of_guesses);
    
    return 0;
}