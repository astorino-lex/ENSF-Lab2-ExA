#include "square.h"
#include <string.h>
#include <stdio.h>
#include <iostream>
using namespace std;

Square::Square(int xcord, int ycord, double length, char* name){
  Shape::Square()
  side_a = length;
}

void Square::display(){
  cout << "\nShape Name: " <<  Shape::getName() << "\n";
  cout << "\nX-coordinate: " <<  Shape::getOrigin().get_xcord() << "\n";
  cout << "\nY-coordinate: " <<  Shape::getOrigin().get_ycord() << "\n";
  cout << "\nSide a: " <<  side_a << "\n";
  cout << "\nArea: " <<  area() << "\n";
  cout << "\nPerimeter: " <<  perimeter() << "\n";
}

double Square::area(){
  double area = side_a*side_a;
  return area;
}

double Square::perimeter(){
  double perimeter = side_a*4;
  return perimeter;
}

double Square::get_sideA(){
  return side_a;
}

void Square::set_sideA(double length){
  side_a = length;
}
