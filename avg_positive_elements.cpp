#include <iostream>

int main() {
    const int size = 10;
    int arr[size];
    int sum = 0;
    int count_positive = 0;

    std::cout << "Enter " << size << " integers:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];

        if (arr[i] > 0) {
            sum += arr[i];
            count_positive++;
        }
    }

    double avg = 0.0;
 
        avg = sum / count_positive; 
    

    std::cout << "Average of all positive elements: " << avg << std::endl;

    return 0;
}
