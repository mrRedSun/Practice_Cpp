#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int array[8] = {1, 2, 3, 4, 5, 3, 3, 5};

    int mostCommonIn = 0;
    int mostCommonElem = -1;

    for (int i = 0; i < 8; i++) {
        int currentIn = 1;
        int currentElem = array[i];
        for (int j = i + 1; j < 8; j++) {
            if (currentElem == array[j]) {
                currentIn++;
            }
        }

        if (mostCommonIn < currentIn) {
            mostCommonIn = currentIn;
            mostCommonElem = currentElem;
        }
    }


    for (int i = 0; i < 8; i++) {
        cout << array[i] << " ";
    }
    cout << endl;


    for(int t = 0; t < mostCommonIn; t++) {
        for (int i = 0; i < 8; i++) {
            if (array[i] == mostCommonElem) {
                for (int j = i; j < 8; j++) {
                    array[j] = array[j + 1];

                }

            }
        }
    }



    for (int i = 0; i < 8; i++) {
        cout << array[i];
    }
    return 0;
}
