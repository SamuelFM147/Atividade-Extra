#include <stdio.h>

// Função para realizar o Insertion Sort
void insertionSort(int arr[], int n) {
	int i;
    for (i = 1; i < n; i++) {
        int key = arr[i]; // Elemento atual
        int j = i - 1;

        // Move os elementos maiores que a chave uma posição à frente
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key; // Insere o elemento na posição correta
    }
}


int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    insertionSort(arr, n);

    printf("Array ordenado: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

