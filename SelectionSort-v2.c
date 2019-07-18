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

    int x,temp;
    for (int i = 0; i < ARRAY_SIZE-1; i++) {
        x = i;
        for (int j = i+1; j < ARRAY_SIZE; j++) {
            int current = array[j];
            if (current > array[x] ) {
                x = j;
            }
        }
        temp = array[i];
        array[i] = array[x];
        array[x] = temp;
    }


    // print the results
    printf("Sorted Array: \n");
    printArray(array);
    return 0;
}



