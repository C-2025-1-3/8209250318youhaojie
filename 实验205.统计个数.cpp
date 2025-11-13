#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	string str;
	getline(cin, str);
	int l=0, n=0, s=0, o=0,i=0;	//l代表字母，n代表数字，s代表空格，o代表其他
	for (i = 0; i <= str.length(); i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
			n++;
		else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			l++;
		else if (str[i] == ' ')
			s++;
		else o++;
	}
	cout << "英文字母个数是："<<l <<endl;
	cout << "数字个数是："<<n <<endl;
	cout << "空格个数是："<<s <<endl;
	cout << "其他字符个数是："<< o <<endl;
	return 0;
}