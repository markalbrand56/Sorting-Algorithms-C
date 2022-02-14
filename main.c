#include <stdio.h>

void bubbleSort(int arr[], int size){
    int ordered = 0;

    while(ordered != 1){
        int counter = 0;
        for(int i = 0; i < size-1; i++){
            if(arr[i] > arr[i + 1]){
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            } else{
                counter++;
                if(counter == size-1){
                    ordered = 1;
                }
            }
        }
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void resetArray(int arr[]){
    arr = {64, 24, 6, 22, 10, 7, 2, 1}
}

int main() {
    int numbers[] = {64, 24, 6, 22, 10, 7, 2, 1};
    int n = sizeof(numbers)/sizeof(numbers[0]);

    bubbleSort(numbers, n);
    printArray(numbers, n);

    resetArray(numbers)
    return 0;
}
