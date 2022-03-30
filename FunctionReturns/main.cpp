// functionReturnValues.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

// This function has two integer parameters, one named x, and one named y
// The values of x and y are passed in by the caller
void printValues(int x, int y)
{
    std::cout << "\nYour first value is " << x << '\n';
    std::cout << "Your second value is " << y << '\n';
}

void printDouble(int value) // This function now has an integer parameter
{
    std::cout << value << " doubled is: " << value * 2 << '\n';
}

int main()
{
    int x{ getValueFromUser() }; // first call to getValueFromUser
    int y{ getValueFromUser() }; // second call to getValueFromUser
    int num{ getValueFromUser() };

    printDouble(num);
    std::cout << x << " + " << y << " = " << x + y << '\n';

    //The numbers in the parenthesis are arguments, they replace x and y in the printValues function. 
    printValues(7, 3);

    return 0;
}