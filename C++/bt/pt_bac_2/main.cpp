#include <iostream>
#include <conio.h>
#include <math.h>



int main(int argc, char *argv[]) {
	int a, b, c;
	double denta, x1, x2;
	std::cout << "Nhap cac he so cua phuong trinh: ";
	std::cin >> a >> b >> c;
	denta = b*b - 4*a*c;
	if (denta < 0) std::cout <<"phuong trinh vo nghiem";
	if (denta > 0){
		x1 = (-b + sqrt(denta))/(2*a);
		x2 = (-b - sqrt(denta))/(2*a);
		std::cout <<"phuong trinh co 2 nghiem: \n" << x1<<"\n"<<x2;
	}
	if (denta == 0)
	{
		double	x = -b/(2*a);
		std::cout <<"Phuong trinh co nghiem kep : " << x; 
	}
	getch();
	return 0;
}
