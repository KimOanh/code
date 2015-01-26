#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[]) {
	int i,j,a;
	cout << "Nhap a: ";
	cin >> a;
	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= a;j++)
		{
			if (j <= i)cout <<"*";
		}
		cout <<"\n";
	}
	getch();
	return 0;
}
