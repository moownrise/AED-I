#include <stdio.h>
#include <stdlib.h>
double maxAverageRatio(int ** classes, int classesSize, int* classesColSize, int extraStudens){ 
    int i, j, k; 
    int n = classesSize;
    int m = *classesColSize;

    double *p = (double*)malloc(n * sizeof(double));
    for (i = 0; i < n; i++){ 
        p[i] = (double)classes[i][0] / clases[i][1];
    } // esse é o p[i] = passi / totali
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            if (j == 0){ // esse é o passi
            classes[i][j] += 1;
            } else if (j == 1){ // esse é o totali
            classes[i][j] += 1;
            }
            p[i] = (double)classes[i][0] / clases[i][1];
        }
    } 
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            if (j == 0) {
                classes[i][j] -= 1;
            } else if (j == 1){
                classes[i][j] -= 1;
            }
        }
    }
    












    


   /*Rabiscos de alguns testes que fiz:
    int i, j, k, l, m, n, o, p, q, r; 
    double maxRatio = 0.0; 
    for (i = 0; i < classesSize; i++){ // um loop através de cada classe
        for (j = 0; j < classesColSize[i]; j++){ 
            for (k = 0; k < classesColSize[i]; k++){ 
                 for (l = 0; l < classesColSize[i]; l++){
                     for (m = 0; m < classesColSize[i]; m++){
                         for (n = 0; n < classesColSize[i]; n++){
                             for (o = 0; o < classesColSize[i]; o++){
                                for (p = 0; p < classesColSize[i]; p++){
                                    for (q = 0; q < classesColSize[i]; q++){
                                        for (r = 0; r < classesColSize[i]; r++){

                                            double ratio = (double)classes[i][j] / (double)classes[i][k] + (double)classes [i][l] / (double)classes[i][m] + (double)classes[i][n] / 
                                            (double)classes[i][o] + (double)classes [i][p] / (double)classes[i][q] + (double)classes [i][r] / (double)classes[i][j]; 

                                            if (ratio > maxRatio){
                                                maxRatio = ratio;
                                            }


                                            }
                                        }
        }
    } // nem todos tem '}'
    int classes ColSizeTemp[classesSize];


    maxRatio = (double) classesColSizeTemp[i] / classesColSize[i];
    return maxRatio;
*/
