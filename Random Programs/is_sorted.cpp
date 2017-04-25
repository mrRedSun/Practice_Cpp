#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

    int n; cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool is_sorted = true;
    bool is_sorted_reverse = true;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1]) {
            is_sorted = false;
        }

        if (arr[i] < arr[i + 1]) {
            is_sorted_reverse = false;
        }
    }

    cout << is_sorted << "\t" << is_sorted_reverse;

    return 0;
}
