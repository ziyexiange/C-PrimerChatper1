// ָ���constexpr
#include <iostream>
using namespace std;
int i = 10;            // ȫ�ֱ���
int j = 20;            // ȫ�ֳ���
int main()
{
	constexpr int *p = &i;
	cout << *p << endl;

	//p = &j;        // ����

	*p = 40;
	cout << *p << endl;

	return 0;
}

