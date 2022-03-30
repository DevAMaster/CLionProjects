//
// Created by Dev on 3/30/22.
//

#ifndef MATHPROGRAMHEADER_CALCULATOR_H
#define MATHPROGRAMHEADER_CALCULATOR_H

#endif //MATHPROGRAMHEADER_CALCULATOR_H

#include<cmath>

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
