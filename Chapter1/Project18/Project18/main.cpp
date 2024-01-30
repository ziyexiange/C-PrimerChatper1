// const顶层
#include<iostream>
using namespace std;
int main()
{
	int i = 42;
	int j = 6;
	const int * p1 = &i;  // 底层const，可以修改指针指向
	int * const p2 = &j;  // 顶层const，不可以修改指针指向
	p1 = &j;
	cout << *p1 << endl;
	*p2 = 42;
	cout << *p2 << endl;
	return 0;
}
