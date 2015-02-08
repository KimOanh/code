#include <iostream>

using namespace std;

void sapxep(int m[100],int x)
{
	int i, j;
	for (i = 1; i < x; i++)
	{
		for (j = i + 1; j <= x; j++)
		{
			if (m[i]>m[j])
			{
				int t = m[i];
				m[i] = m[j];
				m[j] = t;
			}
		}
	}
}

void show(int m[100], int x)
{
	int i;
	for (i = 1; i <= x; i++)
	{
		cout << m[i] << "\n";
	}
}

void main()
{
	int a[100], i, j, n, k = 0;
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		cout << "Nhap phan tu thu " << i << ": ";
		cin >> a[i];
	}
	sapxep(a,n);
	cout << "Day sau khi sap xep la: \n";
	show(a, n);

	for (i = 1; i <= n - 2; i++)
	{
		if ((a[i + 1] - a[i]) == (a[i + 2] - a[i + 1])) k = k+1;
	}
	if (k < (n - 2)) cout << "Day nhap vao khong la CSC";
	else cout << "Day nhap vap la CSC";
	system("pause");
}
