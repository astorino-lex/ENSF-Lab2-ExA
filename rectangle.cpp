#include "rectangle.h"
#include <string.h>
#include <stdio.h>
#include <iostream>
using namespace std;

Rectangle::Rectangle(int x, int y, double sidea, double sideb, string s):Square(x, y, sidea, s){
  side_b = sideb;
}


void Rectangle::display(){
  Shape::display();
  cout << "\nSide a: " <<  Square::get_sideA();
  cout << "\nSide b: " <<  side_b;
  cout << "\nArea: " <<  area();
  cout << "\nPerimeter: " <<  perimeter() <<"\n";
}

double Rectangle::area(){
  double area = Square::get_sideA()*side_b;
  return area;
}

double Rectangle::perimeter(){
  double perimeter = (Square::get_sideA()*2)+ (side_b *2);
  return perimeter;
}

double Rectangle::get_side_b(){
  return side_b;
}

void Rectangle::set_side_b(double length){
  side_b = length;
}

void Rectangle::set_side_a(double length){
  Square::set_sideA(length);
}
