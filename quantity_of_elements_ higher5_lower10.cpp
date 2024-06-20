#include <iostream>

int main () {
    
    const int size = 10;
    int arr[size];
    
    std::cout << "Enter " << size << " integers:" << std::endl;
    
    for(int i = 0; i < size; ++i){
        std::cout << "Enter elements: " << i + 1 << std::endl;
        std::cin >> arr[i];
    }
    
    int count = 0;
    for(int i=0; i < size; ++i){
        if(arr[i]>5 && arr[i] < 10){
            ++count;
        }
    }
    
    std::cout << "Number of elements that lower then 10 and higher then 5:  " << count << std::endl;
    
    return 0;
}