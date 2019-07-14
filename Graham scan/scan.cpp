#include "scan.h"
#include "Point.h"
#include <iostream>
#include "angle.h"
void scan(Point points[], int size)
{
	Point pointsOfConvexHull[5] = { points[0], points[1] };
	float max;
	int iteratorOfMaxElement = 2;
	int counter = 2;


	do
	{
		max = 0;
		for (int j = iteratorOfMaxElement + 1; j < size; j++)
		{

			if (angle(pointsOfConvexHull[(iteratorOfMaxElement - 2)], pointsOfConvexHull[(iteratorOfMaxElement - 1)], points[j]) > max)
			{
				max = angle(pointsOfConvexHull[(iteratorOfMaxElement - 2)], pointsOfConvexHull[(iteratorOfMaxElement - 1)], points[j]);
				iteratorOfMaxElement = j;
			}
		}
		pointsOfConvexHull[counter] = points[iteratorOfMaxElement];
		counter++;

	} while (iteratorOfMaxElement < size -1);
	for (int i = 0; i < 5; i++)
	{
		std::cout << "convex hull point(" << pointsOfConvexHull[i].GetX() << ";" << pointsOfConvexHull[i].GetY() << ")" << std::endl;
	}
	std::cout << std::endl;

}