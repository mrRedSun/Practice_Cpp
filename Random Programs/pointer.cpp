#include <iostream>

using namespace std;

struct product
{
    int weight;
    double price;
} car, apple;


void increment (int * start, int * finish) {
    int * c = start;

    while (c != finish) {
        *c += 1;
        c++;
    }
}

void output(int * start, int * finish) {
    int * current = start;

    while (current != finish) {
        cout << *current;
        current ++;
    }
}

int main(int argc, char const *argv[]) {
    car.price = 10;
    cout << apple.price;
    int numbers[3] = {1, 2, 3};
    output(numbers, numbers + 3);
    increment(numbers, numbers + 3);
    output(numbers, numbers + 3);

    product * pp;
    pp = &car;

    cout << pp -> price;
    return 0;


}
