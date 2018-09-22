#include "square.h"
#include <iostream>
#include <string>

using namespace std;

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle: public Square {

private:
  double side_b;

public:
void display();
//PROMISES: to print the information about the rectangle

double area();
//PROMISES: to return the area of the rectangle

double perimeter();
//PROMISES: to return the perimeter of the rectangle

double get_sideB();
//PROMISES: to return the length of one side of the rectangle

void set_sideB(double length);
//PROMISES: to set a new length of the side of the rectangle



};
#endif
