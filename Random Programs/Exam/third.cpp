// given: int array, write duplicates to other array

bool isInArray(int * array, int element) {
    for (int i = 0; i < 8; i++) {
        if (array[i] == element) {
            return true;
        }
    }
    return false;
}

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int array[8] = {1, 2, 3, 3, 5, 3, 3, 3};

    int arrayD[8] = {0};
    int pos = 0;

    for (int i = 0; i < 8; i++) {
        int currentNum = array[i];

        for(int j = i + 1; j < 8; j++) {
            if (array[j] == currentNum) {
                if (!isInArray(arrayD, currentNum)) {
                    arrayD[pos] = currentNum;
                    pos++;
                    break;
                }
            }
        }
    }

    for(int i = 0; i < pos; i++) {
        cout << arrayD[i] << ' ';
    }
    return 0;
}
