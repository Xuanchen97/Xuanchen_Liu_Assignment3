//
// Created by Xuanchen on 2019-07-18.
//
#include <stdlib.h>
#include <stdio.h>
int ARRAY_SIZE = 5;

// print array function
void printArray(int arr[]) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n-------\n");
}

int main() {
    // original unsorted array
    int array[] = {3,5,1,2,4};
    printf("Original array:\n");
    printArray(array);

    //empty array to store sorted array
    int sortedArray[] = {0,0,0,0,0};

    int k = 0;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        int largestValue = array[0];
        int positionOfLargest = 0;
        for (int j = 0; j < ARRAY_SIZE; j++) {
            int current = array[j];
            if (current > largestValue ) {
                largestValue = current;
                positionOfLargest = j;
                printf("------- Doing a swap!\n");
            }
        }
        sortedArray[k] = largestValue;
        k++;

        array[positionOfLargest] = 0;

    }


    // print the results
    printf("Sorted Array: \n");
    printArray(sortedArray);
    return 0;
}



