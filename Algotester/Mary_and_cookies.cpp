#include <iostream>

int main(int argc, char const *argv[]) {
    long quantity;
    std::cin >> quantity;

    long temp;
    long long summ = 0;
    for (long i = 1; i <= quantity; i++)
    {
        std::cin >> temp;
        if (temp > 1) {
            summ += temp - 1;
        }
    }


    std::cout << summ;

    return 0;
}
