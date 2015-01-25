#include <iostream>

using namespace std;



void main()
{
	int d, m, t;
	cout << "Nhap ngay, thang sinh cua ban: ";
	cin >> d >> m;
	if (((d > 30) && (m % 2) == 0)||((d > 31)&&(m%2)!= 0)){
		cout << "\nNgay sinh khong hop le";
	}
	else  cout << "\nBan sinh ngay " << d << "/" << m;

	switch (m)
	{
	case 1:
		if (d <= 19){
			cout << "\nBan thuoc cung Ma Ket";
			t = 1;
		}
		else{
			cout << "\nBan thuoc cung Bao Binh";
			t = 4;
		}
		break;
	case 2:
		if (d <= 18){
			cout << "\nBan thuoc cung Bao Binh";
			t = 4;
		}
		else{
			cout << "\nBan thuoc cung Song Ngu";
			t = 3;
		}
		break;
	case 3: 
		if (d <= 20){
			cout << "\nBan thuoc cung Song Ngu";
			t = 3;
		}
		else {
			cout << "\nBan thuoc cung Bach Duong";
			t = 2;
		}
		break;
	case 4:
		if (d <= 19){
			cout << "\nBan thuoc cung Bach Duong";
			t = 2;
		}
		else {
			cout << "\nBan thuoc cung Kim Nguu";
			t = 1;
		}
		break;
	case 5:
		if (d <= 20){
			cout << "\nBan thuoc cung Kim Nguu";
			t = 1;
		}
		else {
			cout << "\nBan thuoc cung Song Tu";
			t = 4;
		}
		break;
	case 6:
		if (d <= 21){
			cout << "\nBan thuoc cung Song Tu";
			t = 4;
		}
		else{
			cout << "\nBan thuoc cung Cu Giai";
			t = 3;
		}
		break;
	case 7:
		if (d <= 22){
			cout << "\nBan thuoc cung Cu Giai";
			t = 3;
		}
		else{
			cout << "\nBan thuoc cung Su Tu";
			t = 2;
		}
		break;
	case 8:
		if (d <= 22){
			cout << "\nBan thuoc cung Su Tu";
			t = 2;
		}
		else{
			cout << "vBan thuoc cung Xu Nu";
			t = 1;
		}
		break;
	case 9:
		if (d <= 22){
			cout << "\nBan thuoc cung Xu Nu";
			t = 1;
		}
		else{
			cout << "\nBan thuoc cung Thien Binh";
			t = 4;
		}
		break;
	case 10:
		if (d <= 23){
			cout << "\nBan thuoc cung Thien Binh";
			t = 4;
		}
		else{
			cout << "\nBan thuoc cung Thien Yet";
			t = 3;
		}
		break;
	case 11:
		if (d <= 21){
			cout << "\nBan thuoc cung Thien Yet";
			t = 3;
		}
		else{
			cout << "\nBan thuoc cung Nhan Ma";
			t = 2;
		}
		break;
	case 12:
		if (d <= 21){
			cout << "\nBan thuoc cung Nhan Ma";
			t = 2;
		}
		else{
			cout << "\nBan thuoc cung Ma Ket";
			t = 1;
		}
		break;
	}

	switch (t)
	{
	case 1:
		cout << "\nBan la nguoi chung thuy, can cu, on hoa va khoan thai";
		break;
	case 2:
		cout << "\nBan la mot nguoi nong chay, dam me, nong noi nhung lai rat gan da";
		break;
	case 3:
		cout << "\nNhung nguoi thuoc cung nay thuong nhay cam, de ton thuong va co thien huong ve nghe thuat";
		break;
	case 4:
		cout << "\nBan la nguoi yeu tu do, thong minh, tinh tinh phong khoang, tu tuong cap tien";
	}
	cout << "\n";
	system("pause");
}