// auto�ؼ���
#include<iostream>
using namespace std;
int main()
{
	int i = 0;
	const int ci = i, &cr = ci;

	auto b = ci;             // b��һ��������ci�Ķ���const���Ա�����
	auto c = cr;             // c��һ������

	return 0;
}