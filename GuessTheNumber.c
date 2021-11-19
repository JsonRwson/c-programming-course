#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    srand(time(NULL));
    int randomNumber = rand() % 100 + 1;
    int playerGuess;

    if(argc == 2)
    {   
        int arg1 = atoi(argv[1]); // argv[1] is the first argument, 0 is the actual command
        randomNumber = rand() % arg1 + 1; // random int between 0 and the user arg
    }
    
    while(playerGuess != randomNumber)
    {
        printf("guess the number\n");
        scanf("%d", &playerGuess);

        if(playerGuess < randomNumber)
        {
            printf("Guess is too low\n");
        }

        if(playerGuess > randomNumber)
        {
            printf("Too High!\n");
        }
    }
    printf("You guessed the number");
}