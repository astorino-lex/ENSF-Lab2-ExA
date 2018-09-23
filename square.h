#include "shape.h"
#include <iostream>
#include <string>

using namespace std;

#ifndef SQUARE_H
#define SQUARE_H

class Square: public Shape {

protected:
  double side_a;

public:

Square(int xcord, int ycord, double length, char* name);
//constructor

void display();
//PROMISES: to print the information about the square

double area();
//PROMISES: to return the area of the square

double perimeter();
//PROMISES: to return the perimeter of the square

double get_sideA();
//PROMISES: to return the length of one side of the square

void set_sideA(double length);
//PROMISES: to set a new length of the side of the square



};
#endif
