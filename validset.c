#include <stdio.h>
#include <stdbool.h>

#define arrSize 7

// see if all elements in a set are unique

int validset(char set[], int size)
{
    char temp;
    for(int x = 0; x < size; x++)
    {
        temp = set[x];
        for(int i = x+1; i < size; i++)
        {
            if(temp == set[i]) return false;
        }
    }
    return true;
}

void printArray(char array[], int size)
{
    for(int x = 0; x < size; x++)
    {
        printf("%c", array[x]);
    }
    printf("\n");
}

int main()
{
   char set[arrSize] = {'a','a','c','d','e','f','g'};
   printArray(set, arrSize);

   if(validset(set, arrSize)) printf("valid set");
   else printf("invalid set");
}