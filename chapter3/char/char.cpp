// char与成员函数cout.put()
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

	char num = 'a';		// 在ASCII编码里，a的编码为97，效果与 num = 97 相同，但'a'可移植性更高
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