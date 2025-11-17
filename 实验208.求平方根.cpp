#include<iostream>
#include<iomanip>
using namespace std;

double sqrt_1(double a)
{
	double b=a;
	double next_b;
	int i = 0;
	if (a >= 0) {
		if (a == 0)
			b = 0;
		else {
			do {
				next_b = (b + a / b) / 2;
				i++;
				if (abs(next_b - b) < 0.00001)
					break;
				b = next_b;
				i++;
			} 			
			while (i < 100000);			
		}
		return b;
	}
	else {
		cout << "输入非法！" << endl;
		return -1;
	}
}
int main() {
	double a;
	cout << "请输入一个非负数：" << endl;
	cin >> a;
	cout << a << "的平方根是：" << endl;
	cout << setprecision(10)<<sqrt_1(a) << endl;
	return 0;
}