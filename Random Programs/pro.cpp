#include <iostream>
#include <cmath>

int main(int argc, char const *argv[]) {

    int n; std::cin >> n;

    int * arr = new int [n];

    int counter = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
        if (sqrt(arr[i]) == (int) sqrt(arr[i]) && (int) sqrt (arr[i]) % 2 == 0)
            counter++;
    }

    std::cout << counter << '\n';

    return 0;
}
