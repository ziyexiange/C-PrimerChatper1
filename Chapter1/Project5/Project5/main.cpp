// 字符串
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1 = "hello";                // 使用字符串常量初始化 

	string str2 = { 'h','e','l','l','o' };  // 使用字符数组初始化
	cout << str1 << endl;
	cout << str2 << endl;
	return 0;
}