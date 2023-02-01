//Apache License 2.0

#include <iostream>
#include <cmath>

int main()
{
    double num1, num2;
    char operation;

    std::cout << "Enter first number: \n";
    std::cin >> num1;

    std::cout << "Enter second number: \n";
    std::cin >> num2;

    std::cout << "Enter an operator (+, -, *, /): \n";
    std::cin >> operation;

    double result;

    if (operation == '+')
    {
        result = num1 + num2;
    }
    else if (operation == '-')
    {
        result = num1 - num2;
    }
    else if (operation == '*')
    {
        result = num1 * num2;
    }
    else if (operation == '/')
    {
        result = num1 / num2;
    }
    else 
    {
        std::cout << "Error: Invalid operator \n";
        return 0;    
    }
    std::cout << num1 << " " << operation << " " << num2 << " = " << result;

    
    return 0;
}