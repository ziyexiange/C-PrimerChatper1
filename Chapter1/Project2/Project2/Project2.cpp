// 整型变量
#include <iostream>
using namespace std;
int main()
{
	// 有符号整型
	int a = -5;
	cout << "有符号整型值： " << a << endl;

	// 无符号整型
	unsigned int b = 5;
	cout << "无符号整型值： " << b << endl;

	// 范围
	cout << "有符号整型范围：从 " << INT_MIN << " 到 " << INT_MAX << endl;
	cout << "无符号整型范围：从 0 到 " << UINT_MAX << endl;

	return 0;
}

