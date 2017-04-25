#include <iostream>

using namespace std;

double middle (int * arr, int n) {
    int summ  = 0;
    int counter = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            summ += arr[i];
            counter ++;
        }
    }
    return (double) summ / counter;
}



int main(int argc, char const *argv[]) {
    int n; cin >> n;

    int * array = new int [n];

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    double mid = middle(array, n);

    cout << mid;

    return 0;
}
