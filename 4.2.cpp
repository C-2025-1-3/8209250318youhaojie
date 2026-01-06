#include<iostream>
using namespace std;

void paixv(double a[], int n) {

	for (int k = 0;k<n-1; k++)
	{
		bool change = false;
		for (int j = 0; j <n-1-k; j++)
		{
			if (a[j] > a[j + 1])
			{
				double temp;
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				change = true;
			}
		}
		if (!change)break;
	}
}
void print1(double a[],int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
int main() {
	double a[10];
	cout << "请输入10个数：" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	int n = sizeof(a) / sizeof(a[0]);

	cout << "排序前：" << endl;
	print1(a, n);

	paixv(a, n);
	cout << "排序后：" << endl;
	print1(a, n);
	return 0;


}