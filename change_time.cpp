#include <iostream>

using namespace std;

void Enternumbers(int number1, int number2)
{
	cout << "Enter two integers: ";
	cin >> number1 >> number2;
}

void Show(int number1, int number2)
{
	cout << number1 << ":" << number2;
	if (number1 >= 13) cout << "P";
	else cout << "A";
}

void changeTimes(int &h, int &m)
{
	if ((h >= 13) && (h <= 23)) h = h - 12;
}

void main()
{
	int hours, minutes;
	cout << "Enter two integers: ";
	cin >> hours >> minutes;
	if (((hours < 0) && (hours > 23)) || ((minutes < 0) && (minutes > 59))) cout << "Times error";
	else{
		cout << "Time before change: ";
		Show(hours, minutes);
		changeTimes(hours, minutes);
		cout << "\nTime after change: ";
		Show(hours, minutes);
	}
	system("pause");
}