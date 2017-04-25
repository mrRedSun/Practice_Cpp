// given : int array, number x; output all pairs of elements with sum = x;

#include <iostream>

using namespace std;
int main(int argc, char const *argv[]) {
    int array[5] = {1, 2, 3, 4, 5};

    int x; cin >> x;

    for(int i = 0; i < 8; i++) {
        if (array[i] == x) {
            cout << x << '\n';
        }
        for(int j = i; j < 8; j++) {
            if (array[i] + array[j] == x)
                cout << array[i] << '\t' << array[j] << endl;

        }
    }
    return 0;
}
