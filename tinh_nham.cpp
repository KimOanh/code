#include <iostream>
#include <time.h>

using namespace std;

void main()
{
	int x, y, kq;
	for (int i = 0; i < 10; i++)
	{
		srand(time(0));
		x = rand() % 100 + 1;
		y = rand() % 100 + 1;
		int sum = x + y;
		cout << x << "+" << y << "= ?";
		cout << "\nNhap dap an cua ban: ";
		cin >> kq;
		while (kq != sum)
		{
			cout << "Sai roi, moi tinh lai!\n";
			cout << x << "+" << y << "= ?";
			cout << "\nNhap dap an cua ban: ";
			cin >> kq;
		}
		if (kq == sum) cout << "Tot!\n";
	}
	system("pause");
}