#include <stdio.h>
#include <stdlib.h>

int main(){
    //Eu fiz, acabei apagando todo o código, fui fazer de novo e me perdi kk
    int **generate(int numRows, int *returnSize, int **returnColumnSizes){
        int *ColumnSize = (int *)malloc(numRows * sizeof(int));
        int **arr = (int **)malloc(numRows * sizeof(int *));

        for(int i = 0; i < numRows; i++){
            arr[i] = (int *)malloc((i + 1) * sizeof(int));
            ColumnSize[i] = i + 1;

            for(int j = 0; j <= 1; j++){
                if (i == 0 || j == i){ //mudei em casa "|| j == i'
                    arr[i][j] = 1;
                } else {
                    arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j]; //na aula eu tinha feito: arr[i][j] = arr[i - j][j] + + arr[i - j][j + 1];
                }
            }
        } //fechei o for na linha 21 em casa, na aula eu tinha fechado na linha 25
        *returnSize = numRows;
        *returnColumnSizes = ColumnSize;
        return arr;
}



            // returnSize = numRows;
            /* for(int j = 0; j <= 1; j++){
                arr[0][j] = 1;
            }
            for(int i = 0; i < numRows; i++){
                for(int j = 0; j <= 1; j++){
                    if(i == 0 )
    
            int *row = (int *)malloc((i + 1) * sizeof(int));

            for(int j = 0; j <= 1; j++){
                row[j] = 1;
            }
            for(int j = 2; j <= i; j++){
                row[j] = row[j - 1] + row[j - 2];
            }
               returnColumnSizes[i] = ColumnSize;
               return row;
        }
    }

