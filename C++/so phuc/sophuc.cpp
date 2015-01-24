#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

//tao class so phuc

class soPhuc
{// cu de public da khong phai hoi them
	public :
		float phanThuc, phanAo, modun; // ok
	
	
	// gio la cac hoat dong cua no
	void nhap()
	{
		cout <<" nhap phan thuc : " ; cin >> phanThuc;
		cout <<" nhap phan ao la: "; cin >> phanAo;
		soPhuc();// ? /???
		modun = phanThuc*phanThuc + phanAo*phanAo;// ko biet de tao doc them da tom' lai hoc duoc gì
	} // the thi b
	void hienthi ()
	{
		if (phanAo > 0 ) cout << " + " << phanAo <<"i";
		if (phanAo < 0 ) cout << " - " << phanAo <<"i"; 	
		cout <<"modun la: " << modun;
	}
	// truoc gio van the ma :D
	soPhuc operator +(soPhuc A)  
	{soPhuc kq;
		kq.phanThuc = phanThuc + A.phanThuc;
		kq.phanAo = phanAo + A.phanAo;
	
	return kq;
	}	
	soPhuc operator *(soPhuc A) // thich chua ? ta
	{ soPhuc kq;
	kq.phanThuc = phanThuc*A.phanThuc - phanAo*A.phanAo;
	kq.phanAo = phanAo*A.phanThuc + phanThuc*A.phanAo;
	return kq; // ok 
	}
	soPhuc operator -(soPhuc A)
	{
		soPhuc kq;
		kq.phanThuc = phanThuc - A.phanThuc;
		kq.phanAo = phanAo - A.phanAo;
		return kq;
	}
	soPhuc operator / (soPhuc A)
	{soPhuc kq;
	kq.phanThuc = (phanThuc*A.phanThuc + phanAo*A.phanAo)/(A.phanThuc*A.phanThuc + A.phanAo*A.phanAo);
	kq.phanAo = (phanAo*A.phanThuc - phanThuc*A.phanAo)/(A.phanThuc*A.phanThuc + A.phanAo*A.phanAo);
	return kq;
	}

}; 

int main(int argc, char *argv[]) {
	// gio minh co bien sophuc roi :D
	soPhuc A,B,C; // ok gio viet them ham cong nhe :D
	cout <<"nhap so phuc A \n";
	A.nhap(); 
	cout <<"nhap so phuc B \n";
	B.nhap(); // cach goi ham hieu chua? roi
	 cout<< A;
	getch();
	return 0;// co lam luon khong? // khong nho so lam
	//acgumen la thuoc tinh :D
}
