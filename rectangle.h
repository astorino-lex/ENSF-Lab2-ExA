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
Rectangle(int x, int y, double sidea, double sideb, string s);
//constructor

void display();
//PROMISES: to print the information about the rectangle

double area();
//PROMISES: to return the area of the rectangle

double perimeter();
//PROMISES: to return the perimeter of the rectangle

double get_side_b();
//PROMISES: to return the length of one side of the rectangle

void set_side_b(double length);
//PROMISES: to set a new length of the side of the rectangle

void set_side_a(double length);
//PROMISES: to set a new length for side a of the rectangle

};
#endif
