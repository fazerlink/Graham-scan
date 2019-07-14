#include "Point.h"



Point::Point()
{
	x = 0;
	y = 0;
}


Point::Point(float x, float y)
{
	this->x = x;
	this->y = y;

}

float Point::  GetX()
{
	return	x;
}
float Point:: GetY()
{
	return y;
}
Point Point:: operator = (const Point& another)
{
	Point result;
	this->x = another.x;
	this->y = another.y;
	return result;
}
Point Point:: operator - (const Point& another)
{
	Point result;
	result.x = this->x - another.x;
	result.y = this->y - another.y;
	return result;
}
Point Point:: operator + (const Point& another)
{
	Point result;
	result.x = this->x + another.x;
	result.y = this->y + another.y;
	return result;
}
bool Point:: operator <(const Point& another)
{
	if (this->y < another.y)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Point:: operator >(const Point& another)
{
	if (this->y > another.y)
	{
		return true;
	}
	else
	{
		return false;
	}
}