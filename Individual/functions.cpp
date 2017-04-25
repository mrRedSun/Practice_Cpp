#include "header.h"



int ** read_matrix (int m, int n) {


    int** matrix = new int*[n];

    for (int i = 0; i < n; i ++)
    {
        matrix[i] = new int [m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j ++) {
            matrix[i][j] = rand() % 999 + 100;
        }
    }

    return matrix;
}

void output_matrix (int ** matrix, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j];
        }
    }
}
