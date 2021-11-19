#include <stdio.h>

int main() {
    int arraySize = 9;
    int numberArray[arraySize];
    int loops = 1;
    int swaps = 0;

    printf("Enter ten numbers\n");
    for (int i = 0; i < arraySize + 1; i++) {
        scanf("%d", &numberArray[i]);
    }

    printf("before:\n");
    for (int i = 0; i < arraySize + 1; i++) {
        printf("%d\n", numberArray[i]);
    }

    // main bubblesort loop
    while (1) {
        int startSwaps = swaps;
        for (int i = 0; i < arraySize; i++) {
            if (numberArray[i] > numberArray[i+1]) {
                int temp = numberArray[i];
                numberArray[i] = numberArray[i+1];
                numberArray[i+1] = temp;
                swaps++;
            }
        }
        if (startSwaps == swaps) break;
        loops++;
    }

    printf("sorted\n");

    for (int i = 0; i < arraySize + 1; i++) {
        printf("%d\n", numberArray[i]);
    }

    printf("Number of loops: %d\n", loops);
    printf("Number of swaps %d\n", swaps);
}