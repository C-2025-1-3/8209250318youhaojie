#include<iostream>
#include<cmath>
using namespace std;
bool is_valid(double side1, double side2, double side3)
{
	if (side1 > 0 && side2 > 0 && side3 > 0)
		return true;
}
double area(double side1, double side2, double side3)
{
	if (is_valid(side1, side2, side3))
	{
		if (side1 + side2 > side3 && side2 + side3 > side1 && side3 + side1 > side2)
		{
			double s;
			double a = (side1 + side2 + side3) / 2;
			double t = a*(a - side1)*(a - side2)*(a - side3);
			s = sqrt(t);
			return s;
		}
		else cout << "错误！无法构成三角形" << endl;
		return -1;
	}
	else cout << "错误！请输入正数" << endl;
	return -1;
}