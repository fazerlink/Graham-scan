#include "Point.h"
#include "angle.h"
#include <iostream>
#include <math.h>
float angle(Point A, Point B, Point C)
{

	Point vectorAB;
	Point vectorAC;
	float modVectorAB, modVectorAC;
	float scalar;
	float angle;
	vectorAB = (B - A);
	vectorAC = (C - A);
	modVectorAB = sqrt(vectorAB.GetX() * vectorAB.GetX() + vectorAB.GetY() * vectorAB.GetY());
	modVectorAC = sqrt(vectorAC.GetX() * vectorAC.GetX() + vectorAC.GetY() * vectorAC.GetY());
	scalar = (vectorAB.GetX() * vectorAC.GetX() + vectorAB.GetY() * vectorAC.GetY());
	angle = scalar / (modVectorAB * modVectorAC);
	//cout << "vectorAB " << vectorAB.GetX() << ";" << vectorAB.GetY() << endl;
	//cout << "vectorAC " << vectorAC.GetX() << ";" << vectorAC.GetY() << endl;
	//cout << "modVectorAB " << modVectorAB << endl;
	//cout << "modVectorAC " << modVectorAC << endl;
	//cout << "scalar " << scalar << endl;
	//cout << "angle " << angle << endl;
	return acos(angle);
}

