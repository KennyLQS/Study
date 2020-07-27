// 程序清单2.2 carrots.cpp
// carrots.cpp -- food processing program
// uses and displays a variable

#include<iostream>

int main()
{
	using namespace std;
	int carrots;				// 声明变量

	carrots = 25;				// 赋值
	cout << "I have ";
	cout << carrots;
	cout << " carrots";
	cout << endl;

	carrots = carrots - 1;

	cout << "Crunch, crunch. Now I have " << carrots << " carrots.";
	return 0;
}