// decltype�ؼ���
#include<iostream>
using namespace std;
int main()
{
	const int ci = 0, &cj = ci;

	decltype(ci) x = 0;   // x��������const int
	decltype(cj) y = x;   // y��������const int&, y�󶨵�����x

	return 0;
}