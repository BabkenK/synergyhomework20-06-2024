#include <iostream>

int main() {
    int arr[] = {2, 4, 6, 8, 10};

    int size = sizeof(arr) / sizeof(arr[0]);

    int product = 1;

    for (int i = 0; i < size; ++i) {
        product *= arr[i];
    }

    std::cout << "Product of all elements in the array: " << product << std::endl;

    return 0;
}
