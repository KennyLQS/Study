// char���Ա����cout.put()
#include<iostream>
using namespace std;

int main()
{
	char alarm = '\a';
	char test = '\n';
	cout << alarm;
	cout << test;


	char ch = 'M';
	int i = ch;
	cout << "The ASCII code for " << ch << " is " << i << endl;
	ch += 1;
	i = ch;
	cout << "The ASCII code for " << ch << " is " << i << endl << endl;

	char num = 'a';		// ��ASCII�����a�ı���Ϊ97��Ч���� num = 97 ��ͬ����'a'����ֲ�Ը���
	cout << num << endl;
	cout << '\n';
	cout << "\n";
	cout << "hi\xathere";
	

	cout.put('!');
	cout << endl;
	cout << '!';
	cout << endl;

	cout << "\aOperation \"HyperHype\" is now activated!\n";
	cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
	long code;
	cin >> code;
	cout << "\aYou entered " << code << "...\n";
	cout << "\aCode verified! Proceed with Plan Z3!\n";


}