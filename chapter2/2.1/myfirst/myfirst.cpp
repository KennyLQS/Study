// �����嵥2.1 myfirst.cpp
// myfirst.cpp -- displays a message

#include <iostream>										// c++������������ļ�
using namespace std;									// ���ƿռ����ָ��

int main()
{
	cout << "Come up and C++ me some time." << endl;	// ���
	cout << "Come up and C++ me some time.\n";
	cout << endl;										// ����
	cout << "\n";										// enl �� "\n" Ч����ͬ
	cout << "You won't regret it!" << endl;				
	cin.get();											// ����

	return 0;											// ����ʡ�ԣ�Ĭ�ϻ��
}





/*
#include <iostream>
using std::cout;										// ����ֻ�����õ������ƿռ�
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
// ���Բ������� �ƿռ����ָ���ÿ�����ù��߶�Ҫ�������� ���ƿռ�std
int main()
{
	std::cout << "Come up and C++ me some time." << std::endl;
	std::cout << std::endl;
	std::cout << "You won't regret it!" << std::endl;
	std::cin.get();

	return 0;
}
*/
