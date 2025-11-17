#include<iostream>
using namespace std;

int main() {
	float money = 0.8;
	int n,sum=0,day=0;
	for (n = 2; sum < 100; n *= 2 ) {
		sum += n;
		day++;
	}
	cout << "天数是：" << day << endl;
	cout << "苹果总数：" << sum << endl;
	cout << "平均每天花的钱是：" << sum*money / day<<"元" << endl;
	return 0;
}