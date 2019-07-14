#include <iostream>
#include "Point.h"
#include "Sort.h"
#include "min.h"
#include "scan.h"
using namespace std;


void output(Point points[], int lenth)
{

	for (int i = 0; i < lenth; i++)
	{
		cout << "Point(" << points[i].GetX() << ";" << points[i].GetY() << ")" << endl;
	} 
	cout << endl;
}



int main()
{
	
	Point points[] = { {2.4, 5}, {1.2, 1}, {5, 2},{-1, 5}, {1, -1}, {2,-3}, {-3,-2.5} };
	int size = sizeof(points) / sizeof(Point);
	min(points, size);
	output(points, size);
	sort(points, 1, size,size);
	output(points, size);
	scan(points, size);

	
	return 0;
}