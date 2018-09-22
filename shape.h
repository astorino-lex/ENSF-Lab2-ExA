#include <iostream>
#include <string>
#include "point.h"
using namespace std;

#ifndef SHAPE_H
#define SHAPE_H

class Shape {

private:
  Point origin;
  char * shapeName;

public:
  Shape(Point& p, string s);
  //PROMISES: a constructor which initializes all the data members.

  Shape(const Shape& source); // copy constructor

  ~Shape(); // destructor

  Shape& operator=(const Shape& rhs);
  // REQUIRES: rhs is reference to a Shape as a source
  // PROMISES: to make this-object a copy of rhs.

  const Point& getOrigin();
  //  PROMISES: to return the Point object with the point of origin of the shape.

  char* getName() const;
  // PROMISES: to return the char pointer to the name of the shape.

  void display() const;
  //PROMISES: to print the shape information on the screen.

  double distance(Shape& other);
  //PROMISES: to return distance between the two origins.

  static double distance (Shape& the_shape, Shape& other);
  // PPROMISES: return distance betwwn two origins

  void move(double dx, double dy);
  //PROMISE: to move the origin point of the shapeName

  

};
#endif
