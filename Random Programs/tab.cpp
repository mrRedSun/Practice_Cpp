#include <iostream>

using namespace std;

double func(double x) {
    return x * x;
}

int main(int argc, char const *argv[]) {
    cout << 2^2;
    double a, b;
    int n;
    cout << "Enter a b and n\n";

    cin >> a >> b >> n;

    double h = (a + b) / n;



    double x0 = a;
    for (int i = 0; i < n; i++) {
        x0 += h * i;
        cout << func(x0) << '\t';
    }

    return 0;
}
