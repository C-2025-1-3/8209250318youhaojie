#include<iostream>
using namespace std;

int main() {
	int C, F;
	cout << "请输入华氏度：" << endl;
	cin >> F;
	cout << "转化为摄氏度为：" << (F - 32) * 9 / 5 << "°C" << endl;
	return 0;
}