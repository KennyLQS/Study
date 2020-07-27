// exercise
#include<iostream>
using namespace std;


// 1.显示您的姓名和住址
int main()
{
	string name, address;
	cout << "Please input your name: " << endl;
	cin >> name;
	cout << "Please intput your address: " << endl;
	cin >> address;
	cout << endl;

	cout << "Your name is " << name
		 << " and your address is " << address << endl;
	return 0;
}



// 2. 单位：long、码🐎
//int main()
//{
//	int lon;
//	cout << "How many longs do you want?" << endl;
//	cin >> lon;
//	cout << "Now you have " << lon * 220 << " yard!";
//	return 0;
//}



// 3. 自定义两个函数，每个函数重复输出两次
//void blind();
//void run();
//
//int main()
//{
//	blind();
//	blind();
//	run();
//	run();
//	return 0;
//}
//
//void blind()
//{
//	cout << "Three blind mice" << endl;
//}
//
//void run()
//{
//	cout << "See how they run" << endl;
//}



// 4. 年龄与月份
//int main()
//{
//	int age;
//	cout << "Enter you age: ";
//	cin >> age;
//	cout << "You have " << age * 12 << " months already.";
//	return 0;
//}



// 5. 摄氏度转华氏度
//double celtofah(double);
//
//int main()
//{
//	double cel;
//	cout << "Please enter a Celsius value: ";
//	cin >> cel;
//	cout << cel << " degrees Celius is " << celtofah(cel) << " degrees Fahrenheit.";
//	return 0;
//}
//
//double celtofah(double cel)
//{
//	return cel * 1.8 + 32.0;
//}



// 6. 光年单位转天文单位
//double light_to_astr(double);
//
//int main()
//{
//	double light;
//	cout << "Enter the number of light years:";
//	cin >> light;
//	cout << light << " light years = " << light_to_astr(light) << " astronomical untils.";
//}
//
//double light_to_astr(double light)
//{
//	return light * 63240;
//}



// 7. 小时与分钟
//int main()
//{
//	int minute, hour;
//	cout << "Enter the number of hours: ";
//	cin >> hour;
//	cout << "Enter the number of minutes: ";
//	cin >> minute;
//
//	cout << "Time: " << hour << ":" << minute;
//}