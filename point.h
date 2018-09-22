#include <iostream>
#include <string>
using namespace std;

#ifndef POINT_H
#define POINT_H

class Point {
  public:
    Point(int x, int y);
    //PROMISES: creates a point located at the coordinates (x,y) with a
    //          default id number

    int get_xcord();
    //PROMISES: returns the point's x-coordinate

    int get_ycord();
    //PROMISES: returns the point's y-coordinate

    void set_xcord(int x);
    //REQUIRES: int x for point's x-coordinate
    //PROMISES: set point's x-coordinate to int x

    void set_ycord(int y);
    //REQUIRES: int y for point's y-coordinate
    //PROMISES: set point's y-coordinate to int y

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
    static int id; //id number for each object
};

int Point::id = 1000;

#endif
