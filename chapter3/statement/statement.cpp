// statement ���� ���ݳ�ʼ����ʽ�����
#include<iostream>
#include<climits>
int main()
{
	using namespace std;

	int chest = 42;
	int waist = 0x42;
	int inseam = 042;

	cout << "chest = " << chest << " (42 in decimal)\n";
	cout << "waist = " << waist << " (0x42 in hex)\n";
	cout << "inseam = " << inseam << " (042 in octal)\n";
	cout << endl;

//	cout << dec;	// cout�����Ĭ��Ϊʮ����
	cout << "chest = " << chest << " (decimal for 42)" << endl;
	cout << hex;
	cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
	cout << oct;
	cout << "inseam = " << inseam << " (octal for 42)" << endl << endl;


	#define num 1492L					// #define���� ��cout << out�� Ӱ�죬1492Ĭ��Ϊʮ����int
	cout << "Number = " << num << "\n";		// cout���ǰ˽�����������Ϊ1492�İ˽��� = 2724
	cout << dec;							// cout����ת��Ϊʮ�������
	cout << "Number = " << num << "\n";		// cout��ʱΪʮ������� 1492
	cout << "The number of size: "<< sizeof(num) << endl;	// ���Կ���numĬ��Ϊ����
}