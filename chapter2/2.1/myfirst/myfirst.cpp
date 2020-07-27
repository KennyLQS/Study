// 程序清单2.1 myfirst.cpp
// myfirst.cpp -- displays a message

#include <iostream>										// c++输入输出包含文件
using namespace std;									// 名称空间编译指令

int main()
{
	cout << "Come up and C++ me some time." << endl;	// 输出
	cout << "Come up and C++ me some time.\n";
	cout << endl;										// 换行
	cout << "\n";										// enl 与 "\n" 效果相同
	cout << "You won't regret it!" << endl;				
	cin.get();											// 输入

	return 0;											// 可以省略，默认会加
}





/*
#include <iostream>
using std::cout;										// 可以只编译用到的名称空间
using std::cin;
using std::endl;

int main()
{
	cout << "Come up and C++ me some time." << endl;
	cout << endl;
	cout << "You won't regret it!" << endl;
	cin.get();

	return 0;
}
*/



/*
#include <iostream>												
// 可以不包含名 称空间编译指令，但每个所用工具都要单独加上 名称空间std
int main()
{
	std::cout << "Come up and C++ me some time." << std::endl;
	std::cout << std::endl;
	std::cout << "You won't regret it!" << std::endl;
	std::cin.get();

	return 0;
}
*/
