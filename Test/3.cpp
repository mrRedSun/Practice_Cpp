// n in (9, 100) digits of n = a, b. a*b*2 = n;
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

    for(int i = 10; i < 100; i++)
    {
        if ((i % 10) * (i / 10) * 2 == i)
        {
            cout << i << endl;
        }
    }

    return 0;
}
