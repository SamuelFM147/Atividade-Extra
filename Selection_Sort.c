#include <stdio.h>

// Função para realizar o Selection Sort
void selectionSort(int arr[], int n) {
	int i, j;
    for (i = 0; i < n - 1; i++) {
        int min_idx = i; // Índice do menor elemento
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) { // Encontra o menor elemento
                min_idx = j;
            }
        }
        // Troca o menor elemento encontrado com o primeiro elemento
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}


int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    selectionSort(arr, n);

    printf("Array ordenado: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

