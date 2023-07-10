/*
Miguel J Chevalier
COP3502
July 7, 2023
Lab Assignment 7
*/

#include <stdio.h>
#include <stdlib.h>

//Function that swaps two given numbers in an array
void swap (int *array, int x, int y) {
    int tmp;
    tmp = array[x];
    array[x] = array[y];
    array[y] = tmp;
}

//Function that prints the entire array
void printArray(int *array, int n) {
    printf("{");
    for (int i = 0; i < n; i++) {
        if (i == n - 1)
            printf("%d", array[i]);
        else
            printf("%d, ", array[i]);
    }
    printf("}\n");
}

//Function that sorts an array from least to greatest
void bubbleSort(int *array, int n) {
    int i, j;
    //Tallies the total number of swaps throughout the array
    int numSwap = 0;
    //Tallies the number of swaps for each index
    int numSwapPerIndex = 0;
    for (i = 0; i < n-1; i++) {
        numSwapPerIndex = 0;
        for (j = 0; j < n-i-1; j++) {
            if (array[j] > array[j+1]) {
                swap(array, j, j + 1);
                numSwap++;
                numSwapPerIndex++;
            }
        }
        //Prints what the assignment instructed me to do
        printf("\tnumber of swaps for index %d: %d\n", i, numSwapPerIndex);
    }
    printf("\n\ttotal number of swaps: %d\n\n", numSwap);
}

int main() {
    //Creates a static array of 9 integers
    int arr[9] = {97,  16,  45,  63,  13,  22,  7,  58,  72};
    const int SIZE = sizeof(arr) / sizeof(int);

    //Prints the default array
    printf("Array before sorting: ");
    printArray(arr, SIZE);
    printf("\n");

    //Calls the bubble sort function
    bubbleSort(arr, SIZE);
    //Prints sorted array
    printf("Array after sorting: ");
    printArray(arr, SIZE);
    
    return 0;
}