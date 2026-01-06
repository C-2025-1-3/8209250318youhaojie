#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

bool is_prime(int num);
int main() {
	int num, count;
	int line_num=0;
	for (num = 1, count = 0; count < 200; num++)
	{
		if (is_prime(num)) {
			count++;
			line_num++;
			cout << setw(6) << num;
		}
		if (line_num == 10) {
			cout << endl;
			line_num = 0;
		}
	}
	
	return 0;
}
bool is_prime(int num)
{
	if (num <= 1)
		return false;
	if (num == 2)
		return true;
	if (num % 2 == 0)
		return false;
	for (int i = 3; i <= sqrt(num); i = i + 2)
	{
		if (num % i == 0) 
		{
			return false;
		}
	}
		return true;
}