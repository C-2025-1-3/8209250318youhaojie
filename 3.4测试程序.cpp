#include<iostream>
#include"mytriangle.h"
using namespace std;

int main()
{
	double a, b, c,s;
	cout << "请输入三角形的三边长，用空格隔开："<<endl;
	cin >> a >> b >> c;
	s=area(a, b, c);
	cout << "三角形的面积为：" << s << endl;
	return 0;
}

