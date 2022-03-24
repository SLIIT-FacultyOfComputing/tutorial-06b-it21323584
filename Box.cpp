#include "Box.h"
#include <iostream>
using namespace std;

// Implement setters and getters

void Box::setLength(int l)
{
  length=l;
}

void Box::setWidth(int w)
{
  width=w;

}

void Box::setHeight(int h)
{
  height=h;
}

//getters
int Box::getHeight()
{
  return height;
}

int Box::getLength()
{
  return length;
}

int Box::getWidth()
{
  return width;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() 
{
  return length * width * height;
}
