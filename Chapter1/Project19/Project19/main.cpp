// 指针和constexpr
#include <iostream>
using namespace std;
int i = 10;            // 全局变量
int j = 20;            // 全局常量
int main()
{
	constexpr int *p = &i;
	cout << *p << endl;

	//p = &j;        // 错误

	*p = 40;
	cout << *p << endl;

	return 0;
}

