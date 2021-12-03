#include <stdio.h>
#include <stdbool.h>

#define arrayLength 7

// search for an item in an array linearly and record its position

bool isIn(char set[], char element, int length, int *position)
{
    for(int x = 0; x < length; x++)
        if(element == set[x])
        {
            *position = x;
            return true;
        }
    return false;
}

int main()
{
    char item;
    char array[arrayLength] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
    int pos = 0;
    int *ppos = &pos;

    printf("search for?");
    scanf("%c", &item);

    if(isIn(array, item, arrayLength, ppos)) printf("%c is there bro! at position %d", item, pos);
    else printf("%c is not there bro!", item);
}