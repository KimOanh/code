#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;


class vecTor {
	public: 
		float tungDo, hoanhDo;
		
	void nhap()
	{
		cout << "Nhap tung do, hoanh do: ";
		cin >> tungDo; cin >> hoanhDo;
	}
	
	void hienThi()
	{
		cout <<"("<< tungDo <<"; " << hoanhDo <<")" << endl;
	}
	
	vecTor operator + (vecTor x)
	{
		vecTor kq;
		kq.tungDo = tungDo + x.tungDo;
		kq.hoanhDo = hoanhDo + hoanhDo;
		return kq;
	}
	
	float operator *(vecTor x)
	{
		return sqrt(tungDo*x.tungDo + hoanhDo*x.hoanhDo);
	}
	vecTor operator*(float m)
	{
		vecTor kq;
		kq.tungDo = m*tungDo;
		kq.hoanhDo = m*hoanhDo;
		return kq;
	}
};
int main(int argc, char *argv[]) {
	vecTor x, y, z;
	int m;
	x.nhap();
	y.nhap();
	z = x + y;
	cout <<"tong 2 vector la: ";
	z.hienThi();
	float k = x*y;
	cout <<"tich 2 vector la: ";
	cout << k;
	cout << "Nhap m";
	cin >> m;
	z = x*m;
	z.hienThi();
	getch();
	return 0;
}
