#include <stdio.h>
#include <stdlib.h>

/*
===========================================================================
Estrutura para representar uma turma
===========================================================================
*/
typedef struct {
    int pass;                                            // Alunos que passaram
    int total;                                           // Total de alunos
    double delta;                                        // Representa melhoria na taxa de aprovação
} Class;

/*
===========================================================================
Função para calcular a melhoria ao adicionar um aluno
===========================================================================
*/
double calc_delta(int pass, int total) {
    return ((double)(pass + 1) / (total + 1)) - ((double)pass / total);
}

/*
===========================================================================
Função de comparação para a maxheap: ordenar pela maior melhoria
===========================================================================
*/
int compare(const void *a, const void *b) {
    double diff = ((Class *)b)->delta - ((Class *)a)->delta;
    return (diff > 0) - (diff < 0); 
}

double maxAverageRatio(int **classes, int classesSize,  int *classesColSize, int extraStudents) {
    
    Class *heap = (Class *)malloc(classesSize * sizeof(Class));
    
    for (int i = 0; i < classesSize; i++) {                      // Preenchendo a heap com as turmas
        heap[i].pass = classes[i][0];
        heap[i].total = classes[i][1];
        heap[i].delta = calc_delta(heap[i].pass, heap[i].total);
    }
    
    qsort(heap, classesSize, sizeof(Class), compare);
    
    for (int i = 0; i < extraStudents; i++) {
        heap[0].pass++;
        heap[0].total++;
        heap[0].delta = calc_delta(heap[0].pass, heap[0].total);
        
        qsort(heap, classesSize, sizeof(Class), compare);
    }
    
    double total_ratio = 0.0;                                      // Calcular a média final da taxa de aprovação
    for (int i = 0; i < classesSize; i++) {
        total_ratio += (double)heap[i].pass / heap[i].total;
    }
    
    free(heap);
    return total_ratio / classesSize;
}

int main() {
    int classes1[][2] = {{1,2}, {3,5}, {2,2}};
    int *classesPtrs1[] = {classes1[0], classes1[1], classes1[2]};
    int extraStudents1 = 2;
    
    printf("Resultado: %.5f\n", maxAverageRatio(classesPtrs1, 3, NULL, extraStudents1));
    
    return 0;
}

