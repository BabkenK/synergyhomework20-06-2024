#include <iostream>

int main() {
    int n = 0;
    
    std::cout << "Enter a number (n): ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Error: n must be a non-negative integer." << std::endl;
        return 1; // Exit with error code 1
    }


    for (int i = 0; i <= n; ++i) {
        std::cout << "Square of " << i << " is: " << std::pow(i, 2) << std::endl;
    }

    return 0;
}
