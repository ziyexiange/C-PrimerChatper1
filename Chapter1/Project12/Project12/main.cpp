// ����
#include<iostream>
using namespace std;
int main()
{
	int ival = 1024;
	int & rval = ival;  // rval��ival����һ�����֣�
	cout << rval << endl;
	return 0;
}