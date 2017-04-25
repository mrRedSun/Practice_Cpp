#include <iostream>
#include <time.h>
#include <stdlib.h>

using std::cin;
using std::cout;
using std::endl;

int * random_matrix (int m, int n) {

    srand(time(NULL));

    int* matrix = new int[n * m];


    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j ++) {
            matrix[i + m * j] = rand() % 10;
        }
    }

    return matrix;
}

int * read_matrix(int m, int n) {

	int* matrix = new int[m * n];


	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) {
            cout << "Enter [" << i << "][" << j << "] element";
			cin >> matrix[i +  n * j];
		}
	}

	return matrix;
}

void output_matrix(int * matrix, int m, int n) {

	cout << "Your matrix: \n";
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << matrix[i + m * j] << "\t";
		}
		cout << endl << endl;
	}
}

void trash_cleaner(int * matrix, int m) {
	delete[] matrix;
}

bool is_sym (int * matrix, int m, int n) {
    bool is_symetric = true;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i + n * j] != matrix[j + n * i]) {
                is_symetric = false;
                break;
            }
        }
    }

    return is_symetric;
}

int * traspone (int * matrix, int m, int n) {
    int * transponed = new int [n * m];


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transponed[j + n * i] = matrix [i + n * j];
        }
    }

    return transponed;
}

int * addition (int * mat0, int * mat1, int m, int n) {
    int * result = new int [n * m];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i + n * j] = mat0[i + n * j] + mat1[i + n * j];
        }
    }

    return result;
}

int * multiplication (int * mat0, int * mat1, int m, int n) {
    int * result = new int [n * m];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result [i + n * j]  = 0;
            for (int k = 0; k < n; k++) {
                result [i + n * j] += mat0 [k + n * j] * mat1 [i + n * k];
            }
        }
    }

    return result;
}

int main(int argc, char const *argv[]) {

    int m, n; cin >> m >> n;

    int * mat = read_matrix(m, n);

    output_matrix(mat, m, n);

    int * mat2 = random_matrix(m, n);
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


    return 0;
}
