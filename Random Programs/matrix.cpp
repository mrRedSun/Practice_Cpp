#include <iostream>
#include <time.h>
#include <stdlib.h>

using std::cin;
using std::cout;
using std::endl;

int ** random_matrix (int m, int n) {


    int** matrix = new int*[n];

    for (int i = 0; i < n; i ++)
    {
        matrix[i] = new int [m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j ++) {
            matrix[i][j] = rand() % 10;
        }
    }

    return matrix;
}

int ** read_matrix(int m, int n) {

	int** matrix = new int*[m];

	for (int i = 0; i < m; i++)
	{
		matrix[i] = new int[n];
	}


	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) {
            cout << "Enter [" << i << "][" << j << "] element";
			cin >> matrix[i][j];
		}
	}

	return matrix;
}

void output_matrix(int ** matrix, int m, int n) {

	cout << "Your matrix: \n";
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << matrix[i][j] << "\t";
		}
		cout << endl << endl;
	}
}

void trash_cleaner(int ** matrix, int m) {
	for (int i = 0; i < m; i++) {
		delete[] matrix[i];
	}

	delete[] matrix;
}

bool is_sym (int ** matrix, int m, int n) {
    bool is_symetric = true;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                is_symetric = false;
                break;
            }
        }
    }

    return is_symetric;
}

int ** traspone (int ** matrix, int m, int n) {
    int ** transponed = new int * [n];
    for (int i = 0; i < n; i++) {
        transponed[i] = new int [m];
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transponed[j][i] = matrix [i][j];
        }
    }

    return transponed;
}

int ** addition (int ** mat0, int ** mat1, int m, int n) {
    int ** result = new int * [n];
    for (int i = 0; i < n; i++) {
        result[i] = new int [m];
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = mat0[i][j] + mat1[i][j];
        }
    }

    return result;
}

int ** multiplication (int ** mat0, int ** mat1, int m, int n) {
    int ** result = new int * [n];
    for (int i = 0; i < n; i++) {
        result[i] = new int [m];
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result [i][j]  = 0;
            for (int k = 0; k < n; k++) {
                result [i][j] += mat0 [k][j] * mat1 [i][k];
            }
        }
    }

    return result;
}

int main(int argc, char const *argv[]) {

    srand(time(NULL));

    int m, n; cin >> m >> n;

    int ** mat = read_matrix(m, n);

    output_matrix(mat, m, n);

    int ** mat2 = random_matrix(m, n);
    cout  << endl << "Second matrix \n";
    output_matrix(mat2, m, n);

    cout << "\nIs symetric? - \n"<< is_sym(mat, m, n);

    cout << "\nTransponed second matrix \n";

    output_matrix(traspone(mat2, m, n), m, n);



    cout << "\naddition of two matrices \n";

    output_matrix(addition(mat, mat2, m, n), m, n);

    cout << "\nmultiplication of two matrices \n";
    output_matrix(multiplication(mat, mat2, m, n), m, n);

    trash_cleaner(mat, m);
    trash_cleaner(mat2, m);

    return 0;
}
