// const������
#include<iostream>
using namespace std;
int main()
{
	const int ci = 1024;
	const int &r1 = ci;

	//r1 = 42;         // ����r1�ǶԳ���������
	//int &r2 = ci;    // ������ͼ��һ����ͨ����ָ��һ����������

	return 0;
}