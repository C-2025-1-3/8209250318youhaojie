#include<iostream>
using namespace std;
const double Pi = 3.14159;  
int main() {
	int r, h;
	cout << "请输入圆锥的底半径：" ;
	cin >> r;
	cout <<endl<< "请输入圆锥的高：" ;
	cin >> h;
	cout << endl << "圆锥的体积是：" << Pi * r * r * h / 3 << endl;
	return 0;
}
