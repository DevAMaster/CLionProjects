// Hello World.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdio>






int calculator()
{

    int sum = 100 + 100;

    return sum;
}


int main()
{

    char people[] = "Blacks";

    std::cout << "Hello world!"; // print Hello world! to console

    std::cout << 4; // print 4 to console
    int x{ 5 }; // define integer variable x, initialized with value 5
    std::cout << x; // print value of x (5) to console

    //To print more than one thing on the same line, the insertion operator "<<" can be used.


    std::cout << "\nI dislike a certain type of people, and by that I mean " << people << ".";


    //You can also use print f and if you want variables use "," at the end, with the format specifier in its position.

    printf("\nI dislike a certain type of people, and by that I mean %s.\n\n", people);

    //You can end the line by using std::endl after the sentence if not using printf.

    std::cout << "I dont like! ~~Wait for it~~" << std::endl; // std::endl will cause the cursor to move to the next line of the console
    std::cout << people << std::endl;

    //To get user input, you must use std::cin, present in iostream. One example with std::cout.

    std::cout << "Enter two numbers seperated by a space: ";

    int first{ }; //holds the first thing.
    int second{ }; //holds the second thing.
    std::cin >> first >> second;
    std::cout << "You entered " << first << " and " << second << '\n';

    //To get user input, you must use std::cin, present in iostream. One example with printf.

    printf("\nEnter Two Numbers seperated by space: ");
    //First 1 and second 1 are seperated by a space in the cin.
    int first1{ }; //holds the first thing.
    int second1{ }; //holds the second thing.
    std::cin >> first1 >> second1;
    std::cout << "You entered " << first1 << " and " << second1 << '\n';

    //Math-----------------Below (ALWAYS FOLLOWS PEMDAS)

    //Print using STD Cout

    std::cout << "Here is the sum of 2 and 2 = " << 2 + 2;

    //Print using Printf

    printf("\nHere is the sum of 1 and 2 = %d44", 1 + 2);

    int a{ 2 }; //Initializes "a" to a literal value 2.
    int b{ 2 + 3 }; //Initializes "b" to a sum.
    int c{ calculator() };//Intializes c to the value the calculator returns.

    return 0;


}




//What is a statement?
//A statement is an instruction in a computer program that tells the computer to perform an action.

//What is a function?
//A function is a collection of statements that executes sequentially.

//What is the name of the function that all programs must have ?
//Main.

//When a program is run, where does execution start ?
//Execution starts with the first statement inside the main function.

//What is a syntax error ?
//A syntax error is a compiler error that occurs at compile - time when your program violates the grammar rules of the C++ language.

//What is the C++ Standard Library ?

//A library file is a collection of precompiled code that has been “packaged up” for reuse in other programs.The C++ Standard Library is a
//library that ships with C++.It contains additional functionality to use in your programs.

//What is data?
//Data is any information that can be moved, processed, or stored by a computer.

//What is a value?
//A value is a single piece of data stored in memory.

//What is a variable?
//A variable is a named region of memory.

//What is an identifier?
//An identifier is the name that a variable is accessed by.

//What is a type?
//A type tells the program how to interpret a value in memory.

//What is an integer?
//An integer is a number that can be written without a fractional component.

//What is the difference between initialization and assignment?
//Initialization gives a variable an initial value at the point when it is created. Assignment gives a variable a value at some point after the variable is created.

//What form of initialization should you be using?
//Direct brace initialization.

//What is an uninitialized variable? Why should you avoid using them?
//An uninitialized variable is a variable that has not been given a value by the program (generally through initialization or assignment).
//Using the value stored in an uninitialized variable will result in undefined behavior.

//What is undefined behavior, and what can happen if you do something that exhibits undefined behavior?
//Undefined behavior is the result of executing code whose behavior is not well defined by the language.
//The result can be almost anything, including something that behaves correctly.


//What is the difference between a statement and an expression?
//Statements are used when we want the program to perform an action. Expressions are used when we want the program to calculate a value.