// const的引用
#include<iostream>
using namespace std;
int main()
{
	const int ci = 1024;
	const int &r1 = ci;

	//r1 = 42;         // 错误，r1是对常量的引用
	//int &r2 = ci;    // 错误，试图让一个普通引用指向一个常量对象

	return 0;
}