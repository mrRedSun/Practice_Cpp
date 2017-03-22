#include <iostream>

int main(int argc, char const *argv[]) {
    long long n; std::cin >> n;

    long quantity = 0;

    while(n >= 500) {
        n -= 500;
        quantity++;
    }
    while(n >= 200) {
        n -= 200 ;
        quantity++;
    }
    while(n >= 100) {
        n -= 100 ;
        quantity++;
    }
    while(n >= 50) {
        n -= 50;
        quantity++;
    }
    while(n >= 20) {
        n -= 20;
        quantity++;
    }
    while(n >= 10) {
        n -= 10;
        quantity++;
    }
    while(n >= 5) {
        n -= 5;
        quantity++;
    }
    while(n >= 2) {
        n -= 2;
        quantity++;
    }
    while(n >= 1) {
        n -= 1;
        quantity++;
    }

    std::cout << quantity;

    return 0;
}
