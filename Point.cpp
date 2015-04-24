
#include <iostream>
#include "Point.h"

using namespace std;

Point::Point(int x,int y)
{
    setX(x);
    setY(y);
}

void Point::setX(int x)
{
    this->x = x;
}

int Point::getX()
{
    return x;
}

void Point::setY(int y)
{
    this->y = y;
}

int Point::getY()
{
    return y;
}

void Point::setXY(int x, int y)
{
    this->x = x;
    this->y = y;
}

void Point::print()
{
    cout << "(" << getX() << "," << getY() <<")";
}

Point Point::operator+(Point p) const
{
    return Point (x+p.getX(),y+p.getY());
}

