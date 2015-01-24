#include <iostream>
#include <conio.h>
using namespace std;
class phanSo
{
	public :
		int tuSo, mauSo;
	void nhap()
	{ 
	cout << " nhap tu so "; cin >> tuSo;
	cout <<" nhap mau so "; cin >> mauSo;
	}
	void hienthi()
	{
		cout << tuSo <<"/" << mauSo;
	}
	int uocChung(int a,int b)
	{
		while (a != b) {
		if (a > b) a = a - b;
		if (a < b) b = b - a;
		}
	return a;	
	}
	void rutgon()
	{
		int uoc = uocChung(tuSo,mauSo);
		tuSo = tuSo/uoc;
		mauSo = mauSo/uoc;
	}
	phanSo operator +(phanSo a)
	{
		phanSo kq;
		kq.tuSo = tuSo * a.mauSo + a.tuSo * mauSo;
		kq.mauSo = mauSo * a.mauSo;
		return kq;
	}
	phanSo operator -(phanSo a)
	{
		phanSo kq;
		kq.tuSo = tuSo * a.mauSo - a.tuSo * mauSo;
		kq.mauSo = mauSo * a.mauSo;
		return kq;
	}
	phanSo operator *(phanSo a)
	{
		phanSo kq;
		kq.tuSo = tuSo * a.tuSo;
		kq.mauSo = mauSo * a.mauSo;
		return kq;
	}
	phanSo operator /(phanSo a)
	{
		phanSo kq;
		kq.tuSo = tuSo * a.mauSo;
		kq.mauSo = mauSo * a.tuSo;
		return kq;
	}
	
};
int main(int argc, char *argv[]) {
	phanSo A,B,C;
	A.nhap();
	B.nhap();
	C = A+ B;
	C.rutgon();
	C.hienthi();
	getch();
	return 0;
}
