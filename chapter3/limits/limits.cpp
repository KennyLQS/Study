// 编程练习3.1 整形变量的范围
// limits.cpp -- some integer limits
#include <iostream>
#include <climits>			// limits 极限
using namespace std;

int main()
{
	// 声明四种整形变量并且初始化为该类型的最大值
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	// 用sizeof分别计算每种类型的字节数
	cout << "Number of bytes:" << endl;
	cout << "short is " << sizeof n_short << " bytes." << endl;		// sizeof：运算符
	cout << "int is " << sizeof(int) << " bytes." << endl;
	cout << "long is " << sizeof n_long << " bytes." << endl;
	cout << "long long is " << sizeof n_llong << " bytes." << endl;
	cout << endl;

	// 用climits中的符号常量表示整形变量的最大值
	cout << "Maximum values:" << endl;
	cout << "short: " << n_short << endl;
	cout << "int: " << n_int << endl;
	cout << "long: " << n_long << endl;
	cout << "long long: " << n_llong << endl;
	cout << endl;

	// int最小值
	cout << "Minimum int value = " << INT_MIN << endl << endl;

	// 一个字节的位数
	cout << sizeof(char) << " bytes have " << CHAR_BIT << " bits" << endl << endl;

	// test
	cout << SHRT_MAX << endl;
}