#include <stdio.h>

int main()
{
    // Full Square
    
    int size;
    printf("What size?");
    scanf("%d", &size);
    
    for(int i = 0; i <= size; i++)
    {
        for(int x = 0; x <= size; x++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Square with hole
    printf("\n");

    for(int i = 0; i < size; i++)
    {
        if(i == 0 || i == size-1)
        {
            for(int x = 0; x < size; x++)
            {
                printf("*");
            
            }
        }
        else{
            printf("*");
            for(int y = 0; y < size-2; y++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    // Triangle
    printf("\n");

    int z = 1;
    int c = size;
    int x = c;

    for(int h = 0; h < size; h++)
    {
        for(x = c; x > 0; x--)
        {
            printf(" ");
        }

        for(int y = 0; y<z; y++)
        {
            printf("*");
        }
        z+=2;
        c--;
        printf("\n");
    }
}