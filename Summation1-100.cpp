#include <iostream>

int main() {
    int sum = 0;

    // Calculate the sum of numbers from 1 to 100
    for (int i = 1; i <= 100; ++i) {
        sum += i;
    }

    std::cout << "The summation of all numbers from 1 to 100 is = " << sum << std::endl;

    return 0;
}

