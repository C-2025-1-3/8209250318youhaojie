#include<iostream>
using namespace std;
int main() {
	int array[10];
	int count = 0;
	cout << "请输入10个整数：" << endl;
	for (int i=0;i<10;i++)
	{
		int input;
		cin >> input;
		
		bool found = false;
		for (int j = 0; j < count; j++)
		{
			if (input == array[j]) {
				found = true;
				break;
			}
		}	
		if (!found) {
				array[count] = input;
				count++;
			}	
	}
	cout << "不同的数有:"<<endl;
	for (int k = 0; k < count; k++)
	{
		cout << array[k] << " ";
	}
	//cout << array[0];
	return 0;
}