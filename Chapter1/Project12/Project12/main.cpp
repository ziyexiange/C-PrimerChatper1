// 引用
#include<iostream>
using namespace std;
int main()
{
	int ival = 1024;
	int & rval = ival;  // rval是ival的另一个名字；
	cout << rval << endl;
	return 0;
}