// �����ϰ3.1 ���α����ķ�Χ
// limits.cpp -- some integer limits
#include <iostream>
#include <climits>			// limits ����
using namespace std;

int main()
{
	// �����������α������ҳ�ʼ��Ϊ�����͵����ֵ
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	// ��sizeof�ֱ����ÿ�����͵��ֽ���
	cout << "Number of bytes:" << endl;
	cout << "short is " << sizeof n_short << " bytes." << endl;		// sizeof�������
	cout << "int is " << sizeof(int) << " bytes." << endl;
	cout << "long is " << sizeof n_long << " bytes." << endl;
	cout << "long long is " << sizeof n_llong << " bytes." << endl;
	cout << endl;

	// ��climits�еķ��ų�����ʾ���α��������ֵ
	cout << "Maximum values:" << endl;
	cout << "short: " << n_short << endl;
	cout << "int: " << n_int << endl;
	cout << "long: " << n_long << endl;
	cout << "long long: " << n_llong << endl;
	cout << endl;

	// int��Сֵ
	cout << "Minimum int value = " << INT_MIN << endl << endl;

	// һ���ֽڵ�λ��
	cout << sizeof(char) << " bytes have " << CHAR_BIT << " bits" << endl << endl;

	// test
	cout << SHRT_MAX << endl;
}