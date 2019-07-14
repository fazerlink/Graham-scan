#include "Sort.h"
#include "Point.h"
#include "quickSort.h"
#include "insertSort.h"
void sort(Point points[], int first, int last, int size)
{
	if (size < 100)
	{
		insertSort(points, first, last);
	}
	else
	{
		quickSort(points, first, last);
	}
}