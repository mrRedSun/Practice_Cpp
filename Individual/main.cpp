#include "header.h"

int main(int argc, char const *argv[]) {

    int m, n;
    cout << "Enter m and n: ";
    cin >> m >> n;

    output_matrix(read_matrix(m, n), m, n);


    return 0;
}
