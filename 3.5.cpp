#include<iostream>
using namespace std;

int func()
{
	for (int initial = 1;; initial++)
	{
		int I = initial;
		for (int i = 0; i <9; i++)
		{
			I = I/ 2 - 1;
		}
		int final = I;
		if (final == 1)
			return initial;		
	}	
}

int main() {
	cout << "第一天猴子摘了" << func() << "个桃子" << endl;
	return 0;
}