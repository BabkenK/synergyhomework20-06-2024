#include <iostream>

int main() {
    const int size = 10;
    int arr[size];
    int sum = 0;
    

    std::cout << "Enter " << size << " integers:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
        
        if (arr[i] %2 == 0) {
            sum += arr[i];
        }
    }
    std::cout << "Summation of all even numbers = : " << sum << std::endl;
    
    return 0;
}