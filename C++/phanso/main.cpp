#include <iostream>
#include <conio.h>

using namespace std;

class phanSo{
		public: 
			int tuSo, mauSo;
			
		void nhap()
		{
			cout << "Nhap tu so: ";
			cin >> tuSo;
			cout << "Nhap mau so: ";
			cin >> mauSo;
		}
		
		int uc(int a, int b)
		{
			while (a != b)
			{
				if (a > b) a = a - b;
				else b = b - a;
			}
			return a;
		}
		
		void toigian()
		{
			int k = uc(tuSo,mauSo);
			tuSo = tuSo/k;
			mauSo = mauSo/k;
		}
		
		void hienthi()
		{
			if (mauSo != 0){
				if (tuSo != mauSo)
				{
				if (mauSo > 0) cout << tuSo <<"/"<< mauSo << endl;
				if (mauSo < 0) cout << -tuSo <<"/"<< -mauSo << endl;
				}
				if (tuSo == mauSo) cout << 1 << endl;
			}		
		}
		
		phanSo operator +(phanSo A)
		{
			phanSo kq;
			kq.tuSo = tuSo*A.mauSo + mauSo*A.tuSo;
			kq.mauSo = mauSo*A.mauSo;
			return kq;
		}
		
		phanSo operator -(phanSo A)
		{
			phanSo kq;
			kq.tuSo = tuSo*A.mauSo - mauSo*A.tuSo;
			kq.mauSo = mauSo*A.mauSo;
			return kq;
		}
	
		phanSo operator *(phanSo A)
		{
			phanSo kq;
			kq.tuSo = tuSo*A.tuSo;
			kq.mauSo = mauSo*A.mauSo;
			return kq;
		}
		
		phanSo operator /(phanSo A)
		{
			phanSo kq;
			kq.tuSo = tuSo*A.mauSo;
			kq.mauSo = mauSo*A.tuSo;
			return kq;
		}
};

int main(int argc, char *argv[]) {
	phanSo A, B, T, H, Ti, Th;
	A.nhap();
	A.toigian();	
	B.nhap();
	B.toigian();
	T = A + B;
	cout <<" tong la: ";
	T.hienthi();
	H = A - B;
	cout <<" hieu la: ";
	H.hienthi();
	Ti = A*B;
	cout <<" tich la: ";
	Ti.hienthi();
	Th = A/B;
	cout <<" thuong la: "; 
	Th.hienthi();
	getch();
	return 0;
}
