#include<iostream>
using namespace std;

int gys(int a, int b)
{
	int t,temp;
	if (a<=0||b<=0) {
		cout << "请输入正整数！" << endl;
	}
	else while (b != 0) {
		t = a % b;
		a = b;
		b = t;
	}
	return a;
}
void gys_and_gbs(int a, int b, int& zdgys, int& zxgbs)
{
	int t, temp;
	int A = a, B = b;
	if (a <= 0 || b <= 0) {
		cout << "请输入正整数！" << endl;
	}
	else while (b != 0) {
		t = a % b;
		a = b;
		b = t;
	}
	zdgys = a;
	zxgbs = (A / zdgys) * B;
}
int main() {
	int m, n;
	int zdgys, zxgbs;
	cout << "请输入两个正整数：" << endl;
	cout << "m=" ;
	cin >> m;
	cout << endl << "n=";
	cin >> n;
	cout << endl << "m,n的最大公约数为：" << gys(m, n) << endl;
	gys_and_gbs(m, n,zdgys,zxgbs);
	cout << "最大公约数为：" << zdgys << endl;
	cout << "最小公倍数为：" << zxgbs << endl;
	return 0;
}