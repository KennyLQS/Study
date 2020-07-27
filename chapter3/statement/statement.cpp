// statement —— 数据初始化方式及输出
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

//	cout << dec;	// cout输出流默认为十进制
	cout << "chest = " << chest << " (decimal for 42)" << endl;
	cout << hex;
	cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
	cout << oct;
	cout << "inseam = " << inseam << " (octal for 42)" << endl << endl;


	#define num 1492L					// #define不受 （cout << out） 影响，1492默认为十进制int
	cout << "Number = " << num << "\n";		// cout还是八进制输出，结果为1492的八进制 = 2724
	cout << dec;							// cout重新转换为十进制输出
	cout << "Number = " << num << "\n";		// cout此时为十进制输出 1492
	cout << "The number of size: "<< sizeof(num) << endl;	// 可以看到num默认为整形
}