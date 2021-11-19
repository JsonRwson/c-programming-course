#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// function to add random numbers 1-3 to reels (acts as index for symbols)
int spin(char symbols[], int reels[])
{
    for(int x = 0; x < 3; x++)
    {
        int num = rand() % 4;
        reels[x] = num;
    }

}

// function to print out results and check for loss/win/jackpot
// points increases when a match is found which is used to identify loss/win/jackpot
int showResult(char symbols[], int reels[])
{
    printf("Results:\n");
    printf("___\n");
    for(int x = 0; x < 3; x++)
    {
        printf("%c", symbols[reels[x]]);
    }
    printf("\n");
    printf("___\n");

    int points = 0;
    
    // Checking for matches, double and tripple and altering points
    for(int x = 0; x < 3; x++)
    {
        if(x+1 < 3)
        {
            if(reels[x] == reels[x+1])
            {
                points = 1;
                if(x+2 < 3 && reels[x] == reels[x+2])
                {
                    points = 2;
                    break;
                }
            }
            else
            {
                if(x+2 < 3 && reels[x] == reels[x+2])
                {
                    points = 1;
                }
            }
        }
    }

    // displaying win or loss message
    switch(points)
    {
        case 0:
            printf("No matches, you lost\n");
            break;
        case 1:
            printf("Double Match, Win!\n");
            break;
        case 2:
            printf("Tripple Match, JACKPOT!\n");
            break;
    }
}

// loops until the user wishes to exit
int main()
{
    srand(time(NULL));
    while(1)
    {
        int choice;

        printf("\n\nspin or exit?:\n1. spin\n2. exit\n");
        scanf("%d", &choice);

        char symbols[4] = {'B', 'O', 'C', 'U'};
        int reels[3];

        if(choice == 1)
        {
            spin(symbols, reels);
            showResult(symbols, reels);
        }
        else
        {
            break;
        }
    }
}