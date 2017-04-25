#include <iostream>

using namespace std;


int fibbonacci (int n)
{
    if (n <= 2) {
        return 1;
    }
    else {
        return fibbonacci(n - 1) + fibbonacci (n - 2);
    }
}


int main() {
    double a, b;
    cin >> a >> b;


    int i = 1;
    while (true) {
        if (a < fibbonacci(i) && b > fibbonacci (i)) {
            cout << fibbonacci (i) << endl;
        }

        if (fibbonacci(i) > b) {
            break;
        }
        i++;
    }

    return 0;
}
