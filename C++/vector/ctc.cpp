#include <iostream>
#include <conio.h>
#include <math.h>


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
		vector kq;
		kq.tungDo = tungDo + x.tungDo;
		kq.hoanhDo = hoanhDo + hoanhDo;
		return kq;
	}
	
	int operator *(vecTor x)
	{
		return sqrt(tungDo*x.tungDo + hoanhDo*x.hoanhDo);
	}
	
	int 
};
