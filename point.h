#include <iostream>
#include <string>
using namespace std;

#ifndef POINT_H
#define POINT_H

class Point {

  public:
    static int count; //total number of points

    Point(int x, int y);
    //PROMISES: creates a point located at the coordinates (x,y) with a
    //          default id number

    int getx();
    //PROMISES: returns the point's x-coordinate

    int gety();
    //PROMISES: returns the point's y-coordinate

    void setx(int x);
    //REQUIRES: int x for point's x-coordinate
    //PROMISES: set point's x-coordinate to int x

    void sety(int y);
    //REQUIRES: int y for point's y-coordinate
    //PROMISES: set point's y-coordinate to int y

    Point& operator =(const Point& p);
    // REQUIRES: p is reference to a Point as a source
    // PROMISES: to make this-object (object that this is pointing to, as  a copy
    //           of p.

    int counter();
    //PROMISES: returns the number of objects of class Point at any time

    void display();
    //PROMISES: displays x and y coordinate in a specified format

    static double distance(Point a, Point b);
    //REQUIRES: two objects of class Point
    //PROMISES: returns the distance between Point a and Point b

    double distance(Point a);
    //REQUIRES: an onject of class Point
    //PROMISES: returns the distance between Point and Point a


  private:
    int xcord; //x coordinate on a cartersian plane
    int ycord; //y coordinate on a cartesian plane
    int id; //id number for each object
};

#endif
