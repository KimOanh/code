#include <iostream>
#include <math.h>

using namespace std;

void computerTriangle(double a, double b, double c, double &area, double &perimeter)
{
	if (((a + b) <= c) || ((b + c) <= a) || ((a + c) <= b)) cout << "khong tao thanh tam giac";
	else{
		area = a + b + c;
		double s = area / 2;
		perimeter = sqrt(s*(s - a)*(s - b)*(s - c));
		cout << "Chu vi la: " << area;
		cout << "\nDien tich la: " << perimeter;
	}
}
void main()
{
	double x, y, z, C,S;
	cout << "Nhap cac canh cua tam giac: ";
	cin >> x >> y >> z;
	computerTriangle(x, y, z, C, S);
	system("pause");
}