#include "shape.h"
#include "point.h"
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

Shape::Shape(int x, int y, string s):origin(x,y) {
  shapeName = new char[s.length() + 1];
  for (int i = 0; i < (s.length()); i++){
    shapeName[i] = s.at(i);
  }
}


Shape::~Shape(){
  delete [] shapeName;
}


Shape::Shape(const Shape& source):origin(source.origin), shapeName(new char[strlen(source.shapeName)+1]){

  if(shapeName == NULL){
    cerr << "Memory not available...";
    exit(1);
  }

  strcpy(shapeName, source.shapeName);
}


Shape& Shape::operator=(const Shape& rhs) {
  if(this==&rhs)
    return *this;

  delete [] shapeName;
  shapeName = new char[strlen(rhs.shapeName)+1];

  if(shapeName == NULL)
  {
    cerr << "Memory not available...";
    exit(1);
  }

  strcpy(shapeName, rhs.shapeName);
  origin = rhs.origin;
  return *this;
}

Point& Shape::getOrigin(){
  return origin;
}

char* Shape::getName(){
  return shapeName;
}

void Shape::display(){
  cout << "\nShape Name: " <<  getName();
  origin.display();
}

double Shape::distance(Shape& other){
  double dist = origin.distance(other.getOrigin());
  return dist;
}

double Shape::distance (Shape& the_shape, Shape& other){
  double dist = Point::distance(the_shape.getOrigin(), other.getOrigin());
  return dist;
}

void Shape::move(double dx, double dy){
  getOrigin().setx((getOrigin().getx())+dx);
  getOrigin().sety((getOrigin().gety())+dy);
}
