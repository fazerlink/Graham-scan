#include "insertSort.h"
#include "Point.h"
#include <iostream>

void insertSort(Point points[], int first, int last)
{
	for (int i = first; i < last; i++)
	{
		for (int j = i; j > first && points[j - 1] > points[j]; j--)
		{
			std::swap(points[j - 1], points[j]);
		}
	}
}