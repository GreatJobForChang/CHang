#include "Rectangle.h"
#include<iostream>

Rectangle::Rectangle(int W, int H)
{
	this->width = W;
	this->Height = H;
}
Rectangle::~Rectangle(){}
int Rectangle::getPerimeter()
{
	return 2 * (width + Height);
}

int Rectangle::getSize()
{
	return width * Height;
}
