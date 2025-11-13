#include<iostream>
using namespace std;

int main()
{
    double x;
    cout << "请输入x的值，其中0<x<10:" << endl;
    cin >> x;
    if (0 < x && x < 10)
    {
        if (0 < x && x < 1)
            cout << (3 - 2 * x) << endl;
        else if (1 <= x && x < 5)
            cout << (2 / (4 * x) + 1) << endl;
        else cout << (x * x) << endl;
    }
    else cout << "无定义" << endl;
    return 0;
}