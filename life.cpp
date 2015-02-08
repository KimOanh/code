#include <iostream>
#include <time.h>
using namespace std;

int check(int dd,int mm,int yy,int dn,int mn,int yn)
{
	int kq = 1; 
	//kiểm tra số lượng ngày trong các tháng tháng:
	// doan nao co van de vay em?
	if ((mm) > 12 || (mm < 1)) {
		kq = 0;
	}
	else if ((mn > 12) || (mn < 1)) kq = 0;
	else{
		switch (mm)
		{
		case 2:
			if (yy % 4 == 0){
				if ((dd < 1) || (dd > 29)) kq = 0;
			}
			else if ((dd < 1) || (dd > 28)) kq = 0;
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if ((dd < 1) || (dd > 31)) kq = 0;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if ((dd < 1) || (dd > 30)) kq = 0;
		}
		switch (mn)
		{
		case 2:
			if (yn % 4 == 0){
				if ((dn < 1) || (dn > 29)) kq = 0;
			}
			else if ((dn < 1) || (dn > 28)) kq = 0;
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if ((dn < 1) || (dn > 31)) kq = 0;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if ((dn < 1) || (dn > 30)) kq = 0;
		}
	}
	//trường hợp năm sinh = năm hiện tại:
	if (yy == yn){
			if (mm == mn){
				if (dd > dn) kq = 0;
			}
			else if (mm > mn) kq = 0;
		}
	//trường hợp năm sinh lớn hơn năm hiện tại:
		else if (yy > yn) kq = 0;
	return kq;
}

void main()
{
	//dd : ngày sinh; mm: tháng sinh; yy: năm sinh
	//dn: ngày hiện tại; mn: tháng hiện tại; yn: năm hiện tại
	int dd, mm, yy, dn, mn, yn;
		cout << "Nhap ngay thang nam sinh: ";
		cin >> dd >> mm >> yy;

		cout << "Nhap ngay, thang, nam hien tai: ";
		cin >> dn >> mn >> yn;

		//cout << check(dd, mm, yy, dn, mn, yn);

		
		if (check(dd, mm, yy, dn, mn, yn) == 1){
		//sumdate: tổng số ngày sống được. 
		int sumdate;
		//th: số năm thường
		//nh: số năm nhuận
		//sum: tổng số ngày trong các năm từ năm sau năm sinh đến năm ngay trước năm hiện tại 1 năm.
		int th = 0, nh = 0, i, j, sum;
		//d2: số ngày tính từ đầu tháng hiện tại cho tới ngày hiện tại.
		//k1: tổng số ngày tính từ đầu năm cho đến đầu tháng hiện tại
		int d2 = 0, k1 = 0;
		// d1 là số ngày còn lại tính từ ngày sinh trong tháng sinh
		//d: số ngày trong 1 tháng
		//k: tổng số ngày tính từ ngày sinh cho đến hết năm.
		int d, d1, k = 0;


		if (yy != yn){
			for (i = yy + 1; i < yn; i++)
			{
				if ((i % 4) == 0) nh = nh + 1;
				else th = th + 1;
			}
			sum = th * 365 + nh * 366;

			if (mm < 12){
				for (j = mm; j <= mm; j++)
				{
					switch (j)
					{
					case 2:
						if (yy % 4 == 0) d1 = 29 - dd;
						else d1 = 28 - dd;
						break;
					case 1:
					case 3:
					case 5:
					case 7:
					case 8:
					case 10:
					case 12:
						d1 = 31 - dd;
						break;
					case 4:
					case 6:
					case 9:
					case 11:
						d1 = 30 - dd;
						break;
					}
				}
				for (j = mm + 1; j <= 12; j++)
				{
					switch (j)
					{
					case 2:
						if (yy % 4 == 0) d = 29;
						else d = 28;
						break;
					case 1:
					case 3:
					case 5:
					case 7:
					case 8:
					case 10:
					case 12:
						d = 31;
						break;
					case 4:
					case 6:
					case 9:
					case 11:
						d = 30;
						break;
					}
					k = k + d;
				}
				k = k + d1;
			}
			else{
				k = 31 - dd;
			}


			if (mn == 1) k1 = dn;
			else{
				for (j = mn; j <= mn; j++) d2 = dn;
				for (j = 1; j < mn; j++)
				{
					switch (j)
					{
					case 2:
						if (yy % 4 == 0) d = 29;
						else d = 28;
						break;
					case 1:
					case 3:
					case 5:
					case 7:
					case 8:
					case 10:
					case 12:
						d = 31;
						break;
					case 4:
					case 6:
					case 9:
					case 11:
						d = 30;
						break;
					}
					k1 = k1 + d;
				}
				k1 = k1 + d2;
			}

			sumdate = k + sum + k1;
		}
		else if (yy = yn){
			if (mn == 1) k1 = dn - dd;
			else{
				for (j = mn; j <= mn; j++) d2 = dn;
				for (j = 1; j < mn; j++)
				{
					switch (j)
					{
					case 2:
						if (yy % 4 == 0) d = 29;
						else d = 28;
						break;
					case 1:
					case 3:
					case 5:
					case 7:
					case 8:
					case 10:
					case 12:
						d = 31;
						break;
					case 4:
					case 6:
					case 9:
					case 11:
						d = 30;
						break;
					}
					k1 = k1 + d;
				}
				k1 = k1 + d2;
			}
			sumdate = k1;
		}
		cout << "Ban da song: " << sumdate << "ngay.";
	}
	else cout << "Ngay thang khong hop le";
	system("pause");
}