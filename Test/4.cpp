#include <iostream>

using namespace std;

/* Starting in the top left corner of a 2x2 grid,
 and only being able to move to the right and down,
 there are exactly 6 routes to the bottom right corner.

 How many such routes are there through a 20x20 grid? */

unsigned long long Fak (int x0, long long x)
{
    if (x <= x0){
        return x;
    } else
        return x * Fak (x0, x - 1);
}

unsigned long long Comb (int k , int n)
{
    return Fak(k + 1, n) / Fak (1, n - k) ;
}

int main()
{
    long long ans = 1;

    for (int i = 0; i < 20; ++i){
        ans *= 40 - i;
        ans /= i + 1;
    }

    cout << ans;

    cout << endl;

    cout << Comb(20, 40);

    cout << endl;



    return 0;
}
