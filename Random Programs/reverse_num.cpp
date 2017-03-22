#include <iostream>

int main(int argc, char const *argv[]) {

    int n; std::cin >> n;
    int temp;
    int result = 0;

    while(n != 0)
    {
        temp = n % 10;
        result = result * 10 + temp;
        n /= 10;
    }

    std::cout << result;

    return 0;
}
