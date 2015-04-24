
#ifndef POINT_H
#define POINT_H

using namespace std;

class Point{
public:
    Point(int,int);

    void setX(int);
    int getX();

    void setY(int);
    int getY();

    void setXY(int, int);

    void print();

    Point operator+(Point p) const;

private:
    int x;
    int y;
};
# endif
