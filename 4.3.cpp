#include<iostream>
using namespace std;

void change(bool a[]) 
{
	//for (int i = 0; i < 100; i++)
	//{
		for (int n = 0;n<100; n++)
		{
			a[0+n] = !a[0+n];
			for (int x=1;(n+x*(n+1))<100;x++)
			{
				a[0 + n + x * (n + 1)] = !a[0 + n + x * (n + 1)];
			}
		}
	//}
}

int main()
{
	bool a[100] = {false};
	change(a);
	for (int i = 0; i < 100; i++)
	{
		//cout << "L" << i + 1 << " ";
		if (a[i]==true)
			cout << "L" << i + 1 << " ";
	}
	return 0;
}


