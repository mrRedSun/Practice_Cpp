#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n; cin >> n;
    int copy = n;
    int length = 0;

    for (int i = 0; copy != 0; i++)
    {
        length += 1;
        copy /= 10;
    }

    int prefix = n / (int) pow(10, length - 1) ;
    int postfix = n % 10 ;
    cout << prefix << '\t' << postfix << endl;

    n = (n - postfix) % (int) pow(10, length - 1);

    n = n + prefix + (int) pow(10, length - 1) * postfix;

    cout << n;
    return 0;
}
