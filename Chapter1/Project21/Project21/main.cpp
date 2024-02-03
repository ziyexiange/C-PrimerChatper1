// auto关键字
#include<iostream>
using namespace std;
int main()
{
	int i = 0;
	const int ci = i, &cr = ci;

	auto b = ci;             // b是一个整数，ci的顶层const特性被忽略
	auto c = cr;             // c是一个整数

	return 0;
}