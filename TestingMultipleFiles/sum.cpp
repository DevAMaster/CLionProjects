//
// Created by Dev on 3/30/22.
//
#include <iostream> // we need iostream since we use it in this file

int getInteger()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;
    return x;
}

