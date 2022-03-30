#include <iostream>
#include <cmath>

using namespace std;//removes need to use "std::" before functions.



int slope(int x1,int x2,int y1,int y2)//Calculates the slope of 2 coordinates.
{

    return (y2-y1)/(x2-x1);

}

double distance(int x1,int x2,int y1,int y2)//Calculates the distance between two points.
{

return sqrt(((x2-x1)^2) - ((y2-y1)^2));

}

void midpoint(int x1, int x2, int y1, int y2) //Function to calculate midpoint.
{

    int xCord{ ((x1+x2)/2) }, yCord{ ((y1+y2)/2) };//Stores the x coordinate and the y coordinate in x and y coordinates,
    //then printed.

     printf("The midpoint is (%d,%d)",xCord,yCord);

}


int main() {

    int userChoice;

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
