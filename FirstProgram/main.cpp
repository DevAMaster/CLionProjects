// FirstProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

//Commit Test

void quizProgram()
{

    int firstInt{ };
    int secondInt{ };

    std::cout << "\nEnter an integer --> ";

    std::cin >> firstInt;


    std::cout << "Enter another integer --> ";

    std::cin >> secondInt;

    printf("%d + %d = %d\n", firstInt, secondInt, firstInt+secondInt);
    printf("%d + %d = %d", firstInt, secondInt, firstInt - secondInt);


}

//Function return values. 
int returnNum()



//A program to double an integer. 
int main()
{
    int userInput{ }; //The integer storage that the user will enter.

    std::cout << "Enter an Integer --> " ;//Prompts the user to input an integer.
    std::cin >> userInput;//Stores users input from the previous line into an integer.

    std::cout << "The doubled value of that integer is --> " << 2 * userInput << std::endl; //Doing the solution in the cout, making the code very simplified.
    std::cout << "The tripled value of that integer is --> " << 3 * userInput << std::endl; //Same as above.

    quizProgram(); //Prints the queries of quiz function.

    return 0;
}