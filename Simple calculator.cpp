#include <iostream>

int main() {
    char sign = 0;
    float num1 = 0;
    float num2 = 0;

    std::cout << "Please enter your operator: +, -, /, *, or if you want to finish calculation please enter @: " << std::endl;
    std::cin >> sign;

    if (sign == '@') {
        std::cout << "Calculation ended by user." << std::endl;
        return 0;  
    }

    if (sign != '+' && sign != '-' && sign != '/' && sign != '*' ) {
        std::cout << "Error: Invalid operator entered." << std::endl;
        return 1; 
    }

    std::cout << "Enter two operands: " << std::endl;
    std::cin >> num1 >> num2;

    switch (sign) {
        case '+':
            std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
            break;
        
        case '-':
            std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
            break;
        
        case '/':
            if (num2 != 0) {
                std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
            } else {
                std::cout << "Error: Division by zero is not allowed." << std::endl;
            }
            break;
        
        case '*':
            std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
            break;
        
        
        default:
            std::cout << "Error: Invalid operator entered." << std::endl;
            break;
    }

    return 0;
}

