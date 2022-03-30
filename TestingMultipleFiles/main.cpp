#include <iostream> // we need iostream here too since we use it in this file as well

//This is just me utilizing 2 different cpp files, yet if you just use one header files you will be
//transfering the contents of it for example any variabeles to the main cpp.


//#ifndef ADD_H
//#define ADD_H
//int add(int x, int y);
//#endif

//Like java projects, the h file is the blueprint class.
int getInteger(); // forward declaration for function getInteger

int main()
{
    int x{ getInteger() };
    int y{ getInteger() };

    std::cout << x << " + " << y << " is " << x + y << '\n';
    return 0;
}