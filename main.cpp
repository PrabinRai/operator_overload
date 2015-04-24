#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
    Point p1(1,2);
    Point p2(4,5);
    p1.print();
    p2.print();

    Point p3 = p1 + p2;
    cout << "\n";

    p3.print();
    cout << "\n";
    Point p4 = p1.operator + (p2);

    cout << "\n";
    p4.print();

    cout << "\n";
    Point p5 = p1+p2+p3+p4;
    p5.print();
}
