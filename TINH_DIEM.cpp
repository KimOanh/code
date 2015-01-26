#include <iostream>
#include <conio.h>
#include <math.h>

float lamtron(float a, int x) //lam tron so a voi x chu so phan thap phan
{	
	float kq;
	float u = a*pow(10,x);
	float t = u - (int)u;
	if (t >= 0.5) kq = (int)(u) + 1;
	if (t < 0.5)  kq = (int)(u);
	
	return kq = kq/pow(10,x);
	
}

int main(int argc, char *argv[]) {
	float TH, GK, CK, ST, CC, TK;
	std:: cout <<"Nhap diem thanh phan: \n";
	std:: cout <<"Diem TH: ";	std:: cin >> TH;
	std:: cout <<"Diem GK: ";	std:: cin >> GK;
	std:: cout <<"Diem CK: ";	std:: cin >> CK;
	std:: cout <<"Diem ST: ";	std:: cin >> ST;
	std:: cout <<"Diem CC: ";	std:: cin >> CC;
	 
	if (CC < 20) TK = 0;
	else TK = 0.2*lamtron(TH,2) + 0.2*lamtron(GK,2) + 0.6*(lamtron(CK,2) + lamtron(ST,2));
	std:: cout << lamtron(TK,2); 
	getch();
	return 0;
}
