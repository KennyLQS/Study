// 程序清单2.5 ourfunc.cpp
//ourfunc.cpp -- defining your own function

#include<iostream>
using namespace std;				// 放在函数外部所有函数通用
void simon(int);

int main()
{
	simon(3);
	cout << "Pick an integer: ";
	int count;
	cin >> count;
	simon(count);
	cout << "Done!" << endl;

	return 0;
}

void simon(int n)
{
	cout << "Simon says touch your toes " << n << " times." << endl;
}