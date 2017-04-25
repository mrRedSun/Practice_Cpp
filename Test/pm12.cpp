#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

double ** read_matrix (int n, int m) {

    double** matrix = new double*[n];

    for (int i = 0; i < n; i ++)
    {
        matrix[i] = new double [m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j ++) {
            matrix[i][j] = rand() % 5 + 1;
        }
    }

    return matrix;
}

void output_matrix (double ** matrix, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << '\t';
        }
        cout << endl;
    }
    cout << endl;
}

void replace (double ** matrix, int n, int m) {
    double temp;
    for (int i = 0; i < n; i++) {
        temp = matrix[i][i];
        matrix[i][i] = matrix[i][n - i - 1];
        matrix[i][n -i - 1] = temp;
    }
}

int main(int argc, char const *argv[]) {

    int n, m;
    cin >> n >> m;
    double ** mat = read_matrix (n, m);

    output_matrix(mat, n, m);

    replace(mat, n, m);

    output_matrix(mat, n, m);
    return 0;
}
