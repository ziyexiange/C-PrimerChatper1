// const��ָ��
#include<iostream>
using namespace std;
int main()
{
	const double pi = 3.14;       // pi�Ǹ�����������ֵ���ܸı�
	//double *ptr = &pi;          // ����ptr��һ����ָͨ��

	const double *cptr = &pi;     // ��ȷ��ָ������ָ�룬ָ���ָ������޸�
	//*cptr = 42;                 // ���󣬲��ܸ�*cptr��ֵ���޸�pi��ֵ

	double dval = 4.2;
	cptr = &dval;                 // ��ȷ��ָ������ָ��ָ��һ���ǳ�������

	double& i = dval;             // ����ͨ���ı�i��ֵ���ı�dval
	i = 44;

	cout << *cptr << endl;

	return 0;
}