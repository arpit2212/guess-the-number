//header files 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
// random number

int number,guess,nguesses = 1 ;
srand(time(0));
number = rand()%100 + 1;
//printf("The number is : %d\n", number);

//keep runing the program untill u guess 

do{
    printf("Guess the number between 1 to 100\n");
    scanf("%d",&guess);

    if (guess > number){
        printf("Lower number please!\n");
     }
    else if (guess < number){
        printf("Higher number please!\n");
    }
    else {
        printf(" you guesed it in %d atempts ",nguesses);
    }
    nguesses++;
} while (guess!=number);

return 0;

}
