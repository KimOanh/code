#include <iostream>
#include <math.h>

using namespace std;



void main()
{
	int a, b, c;
	double x1, x2;
	cout << "Nhap a, b, c: ";
	cin >> a >> b >> c;
	int denta = b*b - 4 * a*c;
	if (denta < 0) cout << " phuong trinh vo nghiem.";
	else if (denta > 0){
		x1 = (-b + sqrt(denta)) / (2 * a);
		x2 = (-b - sqrt(denta)) / (2 * a);
		cout << "phuong trinh co 2 nghiem phan biet: \n";
		cout << "x1 = " << x1; cout << "\nx2 = " << x2;
	}
	else if (denta == 0) {
		x1 = x2 = (-b) / (2*a);
		cout << "phuong trinh co nghiem kep x1 = x2 = " << x1;
	}
	system("pause");
}