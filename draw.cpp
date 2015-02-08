#include <iostream>

using namespace std;

void drawTriangle(int h)
{
	int i, j;
	int sum = 2 * h - 1;
	int between = ((2 * h - 1) / 2) + 1;
	for (i = 1; i <= h; i++)
	{
		for (j = 1; j <= between - i; j++) cout << " ";
		for (j = between - (i-1); j <= between+(i-1); j++) cout << "*";
		for (j = between + i; j <= sum; j++) cout << " ";
		cout << "\n";
	}
}

void drawRectangle(int a, int b)
{
	int i, j;
	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= b; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
}

void drawRectangleBorder(int a, int b)
{
	int i, j;
	for (i = 1; i <= 1; i++)
	{
		for (j = 1; j <= b; j++) cout << "*";
		cout << "\n";
	}
	for (i = 2; i < a; i++)
	{
		for (j = 1; j <= 1; j++) cout << "*";
		for (j = 2; j < b; j++) cout << " ";
		for (j = b; j <= b; j++) cout << "*";
		cout << "\n";
	}
	for (i = a; i <= a; i++)
	{
		for (j = 1; j <= b; j++) cout << "*";
	}
}

void main()
{
	int chon, h, a, b, m, n;

	cout << "MENU: \n";
	cout << " 1: Ve tam giac can.\n";
	cout << " 2: Ve hinh chu nhat day.\n";
	cout << " 3: Ve hinh chu nhat rong. \n";
	cout << " 0: Thoat\n";
	cout << "Chon cach ve: ";
	cin >> chon;
		switch (chon)
		{
		case 0:
			exit(1);
			break;
		case 1:
			cout << "Nhap h: ";
			cin >> h;
			cout << "\n";
			drawTriangle(h);
			cout << "\n";
			break;
		case 2:
			cout << "Nhap a, b: ";
			cin >> a >> b;
			cout << "\n";
			drawRectangle(a, b);
			cout << "\n";
			break;
		case 3:
			cout << "Nhap m, n: ";
			cin >> m >> n;
			cout << "\n";
			drawRectangleBorder(m, n);
			break;
		}
	system("pause");
}