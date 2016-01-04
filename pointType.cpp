#include "pointType.h"
#include <iostream>
#include <string>
using namespace std;

pointType::pointType(int x1, int y1)
{
  setPoint(x1, y1);
}

string pointType::showPoint() const
{
  string point = "0000000";
  char i = x;
  char j = y;
  
  point[0] = '(';
  point[1] = ' ';
  point[2] = i;
  point[3] = ',';
  point[4] = ' ';
  point[5] = j;
  point[6] = ')';
  
  return point;
}

void pointType::setPoint(int x1, int y1)
{
  x = x1;
  y = y1;
}

void pointType::print() const
{
  cout << this->showPoint() << endl;
}

int pointType::getX() const
{
  return x;
}

int pointType::getY() const
{
  return y;
}
