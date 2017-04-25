//backwards dynamic

#include <iostream>

using namespace std;

void output (int * array, int n, int i) {
    if (n == i) {
        cout << *array;
    }
    else {
        cout << *(array + n - i);
        output(array, n, i + 1);
    }
}

int main(int argc, char const *argv[]) {
    int n; cin >> n;
    int * numbers = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    output(numbers, n - 1, 0);

    return 0;
}
