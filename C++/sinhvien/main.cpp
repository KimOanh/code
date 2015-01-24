#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class sinhVien{
		public:
			char hoten, que;
			int diemToan, diemVan, diemTin;
			
			
/*		sinhVien ()
		{
			hoten = 0;
			que = 0;
			diemToan = 0;
			diemVan = 0;
			diemTin = 0;
		}
*/		
		void nhap()
		{
			cout << "Nhap ho ten sinh vien: ";
			cin >> hoten;
			cout <<"Diem toan, van, tin: ";
			cin >> diemToan >> diemVan >> diemTin;
			cout <<"Que quan: ";
			cin >> que;
		}
		
		float diemTB(sinhVien A)
		{
			return ((diemToan + diemVan + diemTin)/3);
		} 
			
		void hienthi()
		{
			cout << "Sinh vien: " << hoten <<"Toan: "<<diemToan<<" Van: "<<diemVan<<" Tin: "<<diemTin << endl;
			cout <<"Que: "<< que;
		}
			
};

int main(int argc, char *argv[]) {
	sinhVien sinhVien[100];
	int n;
	cout <<"Nhap so luong sinh vien: ";
	cin >> n;
	int i = 0;
	for (i=0; i < n; i++)
	{
		cout << sinhVien[i].nhap();
		getch();
	return 0;
}
