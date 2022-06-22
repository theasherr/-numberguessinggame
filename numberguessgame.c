#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
//random number generator
    int number;
    int guess;
    int nguesses=1;
        srand(time(0));
        number = rand()%100+1;
       // printf ("the number is %d \n", number);
//game
     do
    {
    printf ("Guess a number between 1 to 100 \n");
     scanf ("%d",&guess);
            if (guess>number)
            {
            printf ("Lower number please \n");
            }
            else if (guess<number)
            {
            printf ("Higher number please \n");
            }
            else
            { 
            printf ("You guesses the correct number %d attempts \n",nguesses);
            }
            nguesses++;
                    
    } while (!(guess==number));
return 0;
}