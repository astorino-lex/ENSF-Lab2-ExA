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
  char* getName() const;


};
#endif
