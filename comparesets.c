#include <stdio.h>
#include <stdbool.h>

#define arrlength 6

// compare arrays regardless of order

void bubblesort(char set[], int len)
{
    char temp;
    int swaps = 0;
    while (1) 
    {
        int startSwaps = swaps;
        for(int i = 0; i < len-1; i++)
        {
            if(set[i] > set[i+1])
            {
                temp = set[i];
                set[i] = set[i+1];
                set[i+1] = temp;
                swaps++;
            }
        }
        if (startSwaps == swaps) break;
    }
}

void printArray(char array[], int size)
{
    for(int x = 0; x < size; x++)
    {
        printf("%c", array[x]);
    }
    printf("\n");
}

bool setEqual(char s1[], char s2[], int len1, int len2)
{
    if(len1 != len2) return false;
    
    printArray(s1, len1);
    printArray(s2, len2);

    printf("\n\n");

    bubblesort(s1, len1);
    bubblesort(s2, len2);

    printArray(s1, len1);
    printArray(s2, len2);

    printf("\n\n");

    for(int x = 0; x < len1; x++)
    {
        if(s1[x] != s2[x])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char set1[arrlength] = {'c','b','a','d','e','f'};
    char set2[arrlength] = {'f','b','c','e','d','a'};

    if(setEqual(set1, set2, arrlength, arrlength))
    {
        printf("equal sets!");
    }
    else
    {
        printf("unequal sets!");
    }
}