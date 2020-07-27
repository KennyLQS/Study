#include<iostream>
using namespace std;

int main()
{
	// 初始化的四种形式
	int owls = 101;
	int wrens(432);
	int emus{ 7 };
	int hamburgers = { 24 };

	// 初始化为0
	int rheas = 0;
	int pizza(0);
	int psychics{};
	int rocs = {};
	
	cout << owls << endl;
	cout << wrens << endl;
	cout << emus << endl;
	cout << hamburgers << endl << endl;

	cout << rheas << endl;
	cout << pizza << endl;
	cout << psychics << endl;
	cout << rocs << endl << endl;

}