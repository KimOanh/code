#include <iostream>

using namespace std;

double lamtron(double x)
{
	double kq, u;
	u = x * 100 - (int)(x * 100);
	if (u >= 0.5) kq = ((int)(x * 100) + 1);
	else kq = ((int)(x * 100));
	return kq/100;
}

double cong(double x, double y)
{
	return lamtron(x + y);
}

double tru(double x, double y)
{
	return lamtron(x - y);
}

double nhan(double x, double y)
{
	return lamtron(x*y);
}

double chia(double x, double y)
{
	if (y == 0) cout << "Phep chia khong hop le.";
	else return lamtron(x / y);
}

double luythua(double x, float y)
{
	if ((y >0) &&((y - (int)(y))== 0)) {
		return pow(x, y);
	}
	else cout << "de bai yeu cau so mu nguyen duong";
}


void main()
{
	double a, b;
	char math, check;
	cout << "Nhap a: ";
	cin >> a;
	cout <<"Nhap b: ";
	cin >> b;
	cout << "Nhap phep toan: ";
	cin >> math;
	if (math == '+') cout << "Tong la: " << cong(a, b);
	if (math == '-') cout << "Hieu la: " << tru(a, b);
	if (math == 'x') cout << "Tich la: " << nhan(a, b);
	if (math == '/') cout << "Thuong la: " << chia(a, b);
	if (math == '^') cout << "Luy thua la: " << luythua(a, b);
	cout << "\n";

	cout << "Tinh tiep? ";
	cin >> check;
	if (check == 'c'){
		while (check == 'c')
		{
			cout << "Nhap phep toan: ";
			cin >> math;
			if (math == '+') cout << "Tong la: " << cong(a, b);
			if (math == '-') cout << "Hieu la: " << tru(a, b);
			if (math == 'x') cout << "Tich la: " << nhan(a, b);
			if (math == '/') cout << "Thuong la: " << chia(a, b);
			if (math == '^') cout << "Luy thua la: " << luythua(a, b);
			cout << "\n";
			cout << "Tinh tiep? ";
			cin >> check;
		}
	}
	system("pause");
}