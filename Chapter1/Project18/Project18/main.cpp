// const����
#include<iostream>
using namespace std;
int main()
{
	int i = 42;
	int j = 6;
	const int * p1 = &i;  // �ײ�const�������޸�ָ��ָ��
	int * const p2 = &j;  // ����const���������޸�ָ��ָ��
	p1 = &j;
	cout << *p1 << endl;
	*p2 = 42;
	cout << *p2 << endl;
	return 0;
}
