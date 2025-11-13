#include<iostream>
using namespace std;

int main() {
	double a, b, c;
	cout << "请输入三角形的三条边长：" << endl;
	cin >> a >> b >> c;
	if (a > 0 && b > 0 && c > 0) {
		if (a + b > c && b + c > a && c + a > b)
		{
			cout << "三角形的周长为：" << a + b + c << endl;
			if (a == b || b == c || c == a)
			{
				cout << "是等腰三角形" << endl;
			}
			else cout << "不是等腰三角形" << endl;
		}
		else cout << "无法构成三角形" << endl;
	}
	else cout << "请输入正整数" << endl;
	return 0;
}