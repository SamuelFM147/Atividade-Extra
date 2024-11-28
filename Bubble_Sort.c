#include <stdio.h>

// Função para realizar o Bubble Sort
void bubbleSort(int arr[], int n) {
	int i,j;
    for (i = 0; i < n - 1; i++) { // Percorre todos os elementos
        for (j = 0; j < n - i - 1; j++) { // Últimos i elementos já estão ordenados
            if (arr[j] > arr[j + 1]) { // Se o elemento atual é maior que o próximo
                // Troca os dois elementos
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int main() {
	int i;
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    printf("Array ordenado: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

