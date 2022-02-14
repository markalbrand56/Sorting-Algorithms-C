#include <stdio.h>

void bubbleSort(int arr[], int size){
    int ordered = 0;

    while(ordered != 1){
        int counter = 0;  // Tienen que ser todas las pocisiones correctas en una iteración del bucle while
        for(int i = 0; i < size-1; i++){
            if(arr[i] > arr[i + 1]){  // Cambiará de posición a dos números si el de la izquierda es mayor
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            } else{  // Si no, estará en una posición correcta
                counter++;
                if(counter == size-1){
                    ordered = 1;
                }
            }
        }
    }
}

void selectionSort(int arr[], int size){
    int unOrdered = size;
    int max;

    while(unOrdered > 0){
        max = 0;
        for (int i = 1; i < unOrdered; ++i) {
            if(arr[max] < arr[i]){  // Encontrará el numero mayor
                max = i;
            }

        }
        int temp = arr[max];
        arr[max] = arr[unOrdered - 1];
        arr[unOrdered - 1] = temp;
        unOrdered--;  // Por cada iteración del bucle for, un número ya estará en su posición correcta
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void resetArray(int arr[], int size){
    int new[] = {64, 24, 6, 22, 10, 7, 2, 1};
    for (int i = 0; i < size; ++i) {
        arr[i] = new[i];
    }
}

int main() {
    int numbers[] = {64, 24, 6, 22, 10, 7, 2, 1};
    int n = sizeof(numbers)/sizeof(numbers[0]);

    bubbleSort(numbers, n);
    printArray(numbers, n);

    resetArray(numbers, n);

    selectionSort(numbers, n);
    printArray(numbers, n);
    return 0;
}
