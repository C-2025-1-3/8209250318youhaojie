#include<iostream>
#include<cstring>
using namespace std;
int indexOf(const char s1[],const char s2[])
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if (len1 > len2)return -1;
	bool found = true;
	for (int i = 0; i < len2 - len1; i++)
	{
		
		for (int j = 0; j < len1; j++)
		{
			if (s1[j] != s2[i + j]) {
				found = false;
				break;
			}
			else found = true;
		}
		if (found)return i;
	}
	return -1;
}


int main() 
{
	const int max = 1000;
	char s1[max], s2[max];
	cout << "Enter the first string:" << endl;
	cin.getline(s1, max);
	cout << "Enter the second string:" << endl;
	cin.getline(s2, max);
	int a=indexOf(s1, s2);
	cout << "indexOf(¡°" << s1 << "¡±,¡°" << s2 <<
			"¡±)is " << a << endl;
	return 0;
}



