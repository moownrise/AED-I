#include <stdio.h>
#include <stdlib.h>

/*
===========================================================================
Função Generate: Função que gera o Trângulo de Pascal.
numRows: Número de linhas do triângulo
returnSize: Ponteiro para armazenar número total de linhas geradas
returnColumnSizes: Ponteiro para armazenar o tamanho de cada linha (quantidade de elementos)
===========================================================================
*/

int **Generate(int numRows, int *returnSize, int **returnColumnSizes) {

    int *ColumnSize = (int *)malloc(numRows * sizeof(int));
    int **arr = (int **)malloc(numRows * sizeof(int *));
    
    for ( int i = 0; i < numRows; i++ ) {
        arr[i] = (int *)malloc((i + 1) * sizeof(int));
        ColumnSize[i] = i + 1;

        for ( int j = 0; j <= i; j++ ) {
            if ( j == 0 || j == i )    { 
                arr[i][j] = 1;
            }  else  {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
    }

    *returnSize = numRows; 
    *returnColumnSizes = ColumnSize; 
    return arr; 
}


int main() {
    int numRows; 
    printf("Digite o numero de linhas do Triangulo de Pascal: ");
    scanf("%d", &numRows);

    int returnSize;
    int *returnColumnSizes;
    int **result = Generate(numRows, &returnSize, &returnColumnSizes);

    printf("Triangulo de Pascal com %d linhas:\n", numRows);
    for ( int i = 0; i < returnSize; i++ ) {
        for ( int j = 0; j < numRows - i - 1; j++ ) {
            printf("   ");
        }
        for ( int j = 0; j < returnColumnSizes[i]; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    for ( int i = 0; i < returnSize; i++ ) {
        free(result[i]);
    }
    free(result);
    free(returnColumnSizes);

    return 0;
}
