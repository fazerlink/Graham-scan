#include "quickSort.h"
#include "Point.h"
#include <iostream>
void quickSort(Point points[], int first, int last)

{
	int i = first, j = last;
	Point  mid = points[(i + j) / 2];
	while (i <= j)
	{
		while (points[i] < mid)
			i++;
		while (points[j] > mid)
			j--;
		if (i <= j)
		{
			std::swap(points[i++], points[j--]);


		}
	}
	if (first < j)
		quickSort(points, first, j);
	if (last > i)
		quickSort(points, i, last);
}