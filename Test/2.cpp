#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int r;

    cin >> r;

    int counter = 0;
    for (int x = -r; x <= r; x ++)
    {
        for (int y = -r; y <= r; y ++)
        {
            if (r*r >= x*x + y*y) {
                counter ++;
            }
        }
    }

    cout << counter;
    return 0;
}
