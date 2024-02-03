// typedef关键字
#include<iostream>
using namespace std;
int main()
{
	// 1.使用关键字typedef
	typedef double wages;   // wages是double的同义词

	wages a = 10;
	cout << a << endl;

	return 0;
}