#include "Point.h"
#include "min.h"
void min(Point points[], int lenth)
{
	Point min(0, 0);
	int i = 0;

	for (int j = 0; j < lenth; j++)
	{
		if (points[j].GetX() < min.GetX())
		{
			min = points[j];
			i = j;
		}
	}

	points[i] = points[0];
	points[0] = min;
}