#include<iostream>
using namespace std;

int main() {
	char a;
	cout << "请输入一个字符：" << endl;
	cin >> a;
	if (97 <= a && a <= 122)
	{
		cout << "转换后为：" << char(a - 32) << endl;
	}
	else cout << a + 1 << endl;
	return 0;
}