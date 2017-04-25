#include <iostream>

using namespace std;

void shift ()
int main(int argc, char const *argv[]) {

    int n; cin >> n;
    int* arr = new int[n];
    int* arr_shifted = new int [n];

    int shift_size; cin >> shift_size;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    if (shift_size < 0) {
        shift_size = shift_size % n + n;
    }

    for (int i = 0; i < n; i ++)
    {
        arr_shifted[(i + shift_size) % n] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr_shifted[i] << "\t";
    }

    delete []arr;

    return 0;
}
