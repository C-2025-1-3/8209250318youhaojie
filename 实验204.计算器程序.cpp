#include<iostream>
using namespace std;

int main() {
	double num1, num2;
	char op;
	cout << "本计算器支持+ - * / %" << endl;
	cout << "请输入第一个数字：" << endl;
	cin >> num1;
	cout << "请输入运算符：" << endl;
	cin >> op;
	cout << "请输入第二个数字：" << endl;
	cin >>num2;
	switch (op) {
		case '+':
			cout << "结果为：" << num1 + num2 << endl;
			break;
		case'-':
			cout << "结果为：" << num1 - num2 << endl;
			break;
		case'*':
			cout << "结果为：" << num1 - num2 << endl;
			break;
		case'/':
			if (num2 != 0)
				cout << "结果为：" << num1 / num2 << endl;
			else cout << "除数不能为0" << endl;
			break;
		case'%':
			if (num2 != 0)
				cout << "结果为：" << num1 / num2 << endl;
			else cout << "除数不能为0" << endl;
			break;
		default:
			cout << "运算符非法，支持的运算符为 + - * / %" << endl;
			break;
	}
	return 0;
}