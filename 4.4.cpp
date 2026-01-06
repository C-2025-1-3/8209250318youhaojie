#include<iostream>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int i = 0, j = 0, k = 0;
	int comps = 0;
	while (i < size1 && j < size2) 
	{
		if (list1[i] < list2[j])
		{
			list3[k] = list1[i];
			k++, i++;
		}
		else
		{
			list3[k] = list2[j];
			k++, j++;
		}
		comps++;
	}
	while (i < size1)
	{
		list3[k] = list1[i];
		k++, i++;
	}
	while (j < size2)
	{
		list3[k] = list2[j];
		k++, j++;
	}
	cout << "比较次数：" << comps << endl;
}

int main() 
{
	const int max_size = 80;
	int list1[max_size], list2[max_size],list3[max_size*2];
	int size1, size2;
	cout << "输入两个排列好的数组，其中第一个数字为数组长度" << endl;
	cout << "Enter list1:"; cin >> size1;
	for (int i = 0; i < size1; i++) { cin >> list1[i]; }
	cout << "Enter list2:"; cin >> size2;
	for (int i = 0; i < size2; i++) { cin >> list2[i]; }
	merge(list1, size1, list2, size2, list3);

	cout << "The merged list is:";
	for (int j = 0; j < size1 + size2; j++)
	{
		cout << list3[j] << " ";
	}
	return 0;
}