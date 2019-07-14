#pragma once
class Point
{
private:
	float x;
	float y;
public:
	Point();
	Point(float x, float y);
	float GetX();
	float GetY();
	Point operator = (const Point& another);
	Point operator - (const Point& another);
	Point operator + (const Point& another);
	bool operator <(const Point& another);
	bool operator >(const Point& another);
};

