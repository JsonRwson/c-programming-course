#include <stdio.h>
#include <stdbool.h>

#define arrLen 7

// find common elements of two sets and create a new set

void setIntersection(char s1[], char s2[], char res[], int len, int *result)
{
    char temp;
    int count = 0;
    for(int x = 0; x < len; x++)
    {
        for(int i = 0; i < len; i++)
        {
            temp = s1[x];
            if(temp == s2[i])
            {
                res[count] = temp;
                *result = *result + 1;
                count++;
                break;
            }
        }
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

int main()
{
    char set1[arrLen] = {'a','b','c','d','e','f','g'};
    char set2[arrLen] = {'x','c','c','g','e','f','l'};
    char result[arrLen];
    int resultSize = 0;
    int *pRSize = &resultSize;

    printArray(set1, arrLen);
    printArray(set2, arrLen);

    setIntersection(set1, set2, result, arrLen, pRSize);

    printf("\nIntersection of sets:\n");
    printArray(result, resultSize);
}