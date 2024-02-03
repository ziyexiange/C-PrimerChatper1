// decltype关键字
#include<iostream>
using namespace std;
int main()
{
	const int ci = 0, &cj = ci;

	decltype(ci) x = 0;   // x的类型是const int
	decltype(cj) y = x;   // y的类型是const int&, y绑定到变量x

	return 0;
}