#include <stdio.h>
#include <stdlib.h>

// Função para criar a matriz dinamicamente
int** createMatrix(int nlin, int ncol) {
    int **mat = (int **)malloc(nlin * sizeof(int *)); // Aloca as linhas
    if (mat == NULL) {
        fprintf(stderr, "Erro ao alocar memória para as linhas.\n");
        exit(EXIT_FAILURE);
    }
    
    for (int i = 0; i < nlin; i++) {
        mat[i] = (int *)malloc(ncol * sizeof(int)); // Aloca as colunas para cada linha
        if (mat[i] == NULL) {
            fprintf(stderr, "Erro ao alocar memória para as colunas da linha %d.\n", i);
            exit(EXIT_FAILURE);
        }
    }
    return mat;
}

// Função para ler os valores da matriz
void readMatrix(int **mat, int nlin, int ncol) {
    for (int i = 0; i < nlin; i++) {
        for (int j = 0; j < ncol; j++) {
            scanf("%d", &mat[i][j]); // Lê cada elemento da matriz
        }
    }
}

// Função para imprimir os valores da matriz
void printMatrix(int **mat, int nlin, int ncol) {
    for (int i = 0; i < nlin; i++) {
        for (int j = 0; j < ncol; j++) {
            printf("%d ", mat[i][j]); // Imprime cada elemento da matriz
        }
        printf("\n"); // Nova linha após cada linha da matriz
    }
}

// Função para liberar a memória alocada para a matriz
void destroyMatrix(int **mat, int nlin) {
    for (int i = 0; i < nlin; i++) {
        free(mat[i]); // Libera cada linha
    }
    free(mat); // Libera o vetor de ponteiros
}

int main() {
    int lin, col;
    scanf("%d %d", &lin, &col);
    int** mat = createMatrix(lin, col); 
    readMatrix(mat, lin, col);
    printMatrix(mat, lin, col);
    destroyMatrix(mat, lin);
    mat = NULL;
    printf("OK\n");

    return 0;
}
