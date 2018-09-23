#include "rectangle.h"
#include <string.h>
#include <stdio.h>
#include <iostream>
using namespace std;


void Rectangle::display(){
  cout << "\nShape Name: " <<  Shape::getName() << "\n";
  cout << "\nX-coordinate: " <<  Shape::getOrigin().getx() << "\n";
  cout << "\nY-coordinate: " <<  Shape::getOrigin().gety() << "\n";
  cout << "\nSide a: " <<  Square::get_sideA() << "\n";
  cout << "\nSide b: " <<  side_b << "\n";
  cout << "\nArea: " <<  area() << "\n";
  cout << "\nPerimeter: " <<  perimeter() << "\n";
}

double Rectangle::area(){
  double area = Square::get_sideA()*side_b;
  return area;
}

double Rectangle::perimeter(){
  double perimeter = (Square::get_sideA()*2)+ (side_b *2);
  return perimeter;
}

double Rectangle::get_sideB(){
  return side_b;
}

void Rectangle::set_sideB(double length){
  side_b = length;
}
