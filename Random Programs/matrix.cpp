#include <iostream>
#include <time.h>
#include <stdlib.h>

using std::cin;
using std::cout;

int main(int argc, char const *argv[]) {
    int n; cin >> n;
    int** matrix = new int*[n];
    for (int i = 0; i < n; i ++)
    {
        matrix[i] = new int [n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j ++) {
            matrix[i][j] = rand() % 1000;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j ++) {
            cout << matrix[i][j] << "\t";
        }
        cout << std::endl << std::endl;
    }
    return 0;
}
