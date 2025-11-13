#include<iostream>
using namespace std;

int fac1(int a, int b)		//计算最大公约数
{
	int r;
	while (b!=0) {
		r = b;
		b = a % b;
		a = r;
	}
	return a;
	}
int fac2(int a, int b)		//计算最小公倍数
{
	int r;
	r = a * b/fac1(a,b);
	return r;
}

int main() {
	int a, b;
	cout << "请输入两个正整数：" << endl;
	cin >> a >> b;
	if (a > 0 && b > 0)
	{
		cout << "最大公约数是：" << fac1(a, b) << endl;
		cout << "最小公倍数是：" << fac2(a, b) << endl;
	}
	else cout << "请输入两个正整数！" << endl;
	return 0;
}
