#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    clock_t start, end; 
    double cpu_time_used;
    int size = 3000;
    int **arr1, **arr2, **arrResult;

    // Dynamically allocate memory for the arrays
    arr1 = (int **)malloc(size * sizeof(int *));
    arr2 = (int **)malloc(size * sizeof(int *));
    arrResult = (int **)malloc(size * sizeof(int *));
    for (int i = 0; i < size; i++) {
        arr1[i] = (int *)malloc(size * sizeof(int));
        arr2[i] = (int *)malloc(size * sizeof(int));
        arrResult[i] = (int *)malloc(size * sizeof(int));
    }

    // Initialize arrays
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            arr1[i][j] = i + j;
            arr2[i][j] = i - j;
        }
    }

    start = clock();

    // Matrix multiplication
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            arrResult[i][j] = 0;
            for (int k = 0; k < size; k++) {
                arrResult[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    end = clock();
    
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Execution time: %lf seconds\n", cpu_time_used);

    // Free dynamically allocated memory
    for (int i = 0; i < size; i++) {
        free(arr1[i]);
        free(arr2[i]);
        free(arrResult[i]);
    }
    free(arr1);
    free(arr2);
    free(arrResult);

    return 0;
}
// execution time is 226.419 seconds