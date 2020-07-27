// 程序清单2.3 getinfo.cpp
// getinfo.cpp -- input and output

#include<iostream>
using namespace std;

int main()
{
	int carrots;
	cout << "How many carrots do you have?" << endl;
	cin >> carrots;
	cout << "Here are two more. " << endl;
	carrots += 2;
	cout << "Now you have " << carrots << " carrots." << endl;

	cout << "Now you have "		// 拼接也可以多行
		 << carrots
		 << " carrots."
		 << endl;

	cin.get();
	cin.get();
	return 0;
}