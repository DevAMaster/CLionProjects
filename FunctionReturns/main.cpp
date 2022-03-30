// functionReturnValues.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


int add(int x, int y) // x and y created and initialized here
{
    int z{ x + y }; // z created and initialized here

    return z;
}//x,y,z end here.

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

    std::cout << "The sum of 5 and 6 is " <<add(5,6); //5 and 6 replace the x and y values as the arguments in line 7.

    //The numbers in the parenthesis are arguments, they replace x and y in the printValues function. 
    printValues(7, 3);

    return 0;
}

//Function parameters, as well as variables defined inside the function body,
//are called local variables (as opposed to global variables, which we’ll discuss in a future chapter).