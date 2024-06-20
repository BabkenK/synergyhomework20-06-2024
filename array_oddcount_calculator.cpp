#include <iostream>

int main() {
    
    int arr[] = {1, 3,4,6, 10};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    
    int oddcount = 0;
    
    for(int i=0; i<size; ++i){
        if(arr[i]%2 !=0){
            oddcount++;
        }
    }
    
    std::cout << "Quantity of odd numbers in arr is: " << oddcount << std::endl;
    return 0;
}

