#include <iostream>
#include <cmath>
#include "calculator.h"

int main() {

    int userChoice;

    using namespace std;
    printf("1. Slope\n2. Distance\n3. Midpoint\nEnter the number of the option: ");
    cin >> userChoice;

    if (userChoice == 1)
    {

        cout << "Enter x1: ";
        int num1{ };
        cin >> num1;

        cout << "Enter x2: ";
        int num2{ };
        cin >> num2;

        cout << "Enter y1: ";
        int num3{ };
        cin >> num3;

        cout << "Enter y2: ";
        int num4{ };
        cin >> num4;

        printf("The slope is %d ", slope(num1,num2,num3,num4));

    }
    else if (userChoice == 2)
    {

        cout << "Enter x1: ";
        int num1{ };
        cin >> num1;

        cout << "Enter x2: ";
        int num2{ };
        cin >> num2;

        cout << "Enter y1: ";
        int num3{ };
        cin >> num3;

        cout << "Enter y2: ";
        int num4{ };
        cin >> num4;

        printf("The distance is %.2f", distance(num1,num2,num3,num4));
    }
    else if (userChoice == 3)
    {

        cout << "Enter x1: ";
        int num1{ };
        cin >> num1;

        cout << "Enter x2: ";
        int num2{ };
        cin >> num2;

        cout << "Enter y1: ";
        int num3{ };
        cin >> num3;

        cout << "Enter y2: ";
        int num4{ };
        cin >> num4;

        midpoint(num1,num2,num3,num4);
    }
    return 0;
}
