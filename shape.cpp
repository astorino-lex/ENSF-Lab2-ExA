#include "shape.h"
#include "point.h"
#include <string.h>
#include <iostream>
using namespace std;

Shape::Shape(Point& p, string s){
  origin.set_xcord() = p.get_xcord();
  origin.set_ycord() = p.get_ycord();
  shapeName = new char[s.length() + 1];
  strcpy(shapeName, s);
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

const Point& Shape::getOrigin(){
  return origin;
}
char* Shape::getName() const{
  return shapeName;
}
