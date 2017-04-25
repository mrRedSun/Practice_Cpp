#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

    int n; cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_index = 0;
    int min_index = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[max_index]) {
            max_index = i;
        }

        if (arr[i] < arr[min_index]) {
            min_index = i;
        }
    }


    double avarage = 0;
    if (min_index < max_index)
    {
        for(int i = min_index + 1; i < max_index; i++) {
            avarage += arr[i];
        }
        avarage /= (double) max_index - min_index - 1;
    }
    else if (max_index < min_index)
    {
        for(int i = max_index + 1; i < min_index; i++) {
            avarage += arr[i];
        }
        avarage /= (double) min_index - max_index - 1;
    }

    cout << avarage;

    delete []arr;

    return 0;
}
