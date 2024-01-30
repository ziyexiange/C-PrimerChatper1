// 变量初始化
#include<iostream>
using namespace std;
int main()
{
	int a = 0;
	int b = { 0 };
	int c{ 0 };
	int d(0);
	cout << a << " " << b << " " << c << " " << d << endl;

	return 0;
}