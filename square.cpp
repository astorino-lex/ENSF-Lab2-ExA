#include "square.h"
#include <string.h>
#include <stdio.h>
#include <iostream>
using namespace std;

Square::Square(int xcord, int ycord, double length, string name): Shape(xcord, ycord, name){
  side_a = length;
}

void Square::display(){
  Shape::display();
  cout << "\nSide a: " <<  side_a;
  cout << "\nArea: " <<  area();
  cout << "\nPerimeter: " <<  perimeter()<<"\n";
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
