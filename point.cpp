#include "point.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

Point::Point(int x, int y) {
  xcord = x;
  ycord = y;
  id++;
}

int Point::get_xcord() {
  return xcord;
}

int Point::get_ycord() {
  return ycord;
}

void Point::set_xcord(int x) {
  xcord = x;
}

void Point::set_ycord(int y) {
  ycord = y;
}

int Point::counter() {
  return Point::id-1000;
}

void Point::display() {
  printf("x-coordinate: %6.2x\n", xcord);
  printf("y-coordinate: %6.2x\n", ycord);

}

static double Point::distance(Point a, Point b) {
  double x_dist = a.xcord - b.xcord;
  if (x_dist < 0) {
    x_dist = 0 - x_dist;
  }
  double y_dist = a.ycord - b.ycord;
  if (y_dist < 0) {
    y_dist = 0 - y_dist;
  }
  double dist = pow(x_dist, 2) + pow(y_dist, 2);
  return sqrt(dist);
}

double Point::distance(Point a) {
  double x_dist = a.xcord - xcord;
  if (x_dist < 0) {
    x_dist = 0 - x_dist;
  }
  double y_dist = a.ycord - ycord;
  if (y_dist < 0) {
    y_dist = 0 - y_dist;
  }
  double dist = pow(x_dist, 2) + pow(y_dist, 2);
  return sqrt(dist);
}
