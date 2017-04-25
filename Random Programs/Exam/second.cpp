// int array, delete all "x", shift other elements, empty spaces replace with 0's

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int array[6] = {1, 2, 3, 4, 5, 3};

    int x; cin >> x;


    int counterDel = 0;
    for (int i = 0; i < 6; i++) {
        if (array[i] == x) {
            for (int j = i; j < 5; j++) {
                array[j] = array[j + 1];
                counterDel++;
            }
        }
    }

//    for(int i = 5; i >= counterDel; i--) {
    //    array[i] = 0;
    //}

    for(int i= 0 ; i < 6; i++) {
        cout << array[i];
    }
    return 0;
}
