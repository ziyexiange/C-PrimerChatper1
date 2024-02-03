// const与指针
#include<iostream>
using namespace std;
int main()
{
	const double pi = 3.14;       // pi是个常量，它的值不能改变
	//double *ptr = &pi;          // 错误，ptr是一个普通指针

	const double *cptr = &pi;     // 正确，指向常量的指针，指针的指向可以修改
	//*cptr = 42;                 // 错误，不能给*cptr赋值来修改pi的值

	double dval = 4.2;
	cptr = &dval;                 // 正确，指向常量的指针指向一个非常量对象

	double& i = dval;             // 可以通过改变i的值来改变dval
	i = 44;

	cout << *cptr << endl;

	return 0;
}