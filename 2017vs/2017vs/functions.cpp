#include "header.h"

int ** read_matrix(int m, int n) {

	srand(time(NULL));

	int** matrix = new int*[m];

	for (int i = 0; i < m; i++)
	{
		matrix[i] = new int[n];
	}


	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) {
			matrix[i][j] = rand() % 899 + 100;
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

bool primarity_test(int number) {

	bool isPrime = true;
	for (int i = 2; i <= sqrt(number); i++) {
		if (number % i == 0) {
			isPrime = false;
		}
	}
	return isPrime;
}

int quantity_of_prime(int * group, int group_size) {

	int quantity = 0;
	for (int i = 0; i < group_size; i++) {
		if (primarity_test(group[i])) {
			quantity++;
		}
	}
	return quantity;
}

void output_group(int * group, int group_size) {

	cout << "The primest group\n";
	for (int i = 0; i < group_size; i++) {
		cout << group[i] << '\t';
	}
}

int the_primest(int ** matrix, int m, int n) {

	int position = 0;
	for (int i = 1; i < m; i++) {
		if (quantity_of_prime(matrix[position], n) < quantity_of_prime(matrix[i], n)) {
			position = i;
		}
	}

	return position;
}

void trash_cleaner(int ** matrix, int m) {
	for (int i = 0; i < m; i++) {
		delete[] matrix[i];
	}

	delete[] matrix;
}