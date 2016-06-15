//chi so BMI
#include <iostream>
#include <conio.h>

float lamtron(float a)
{
	float kq;
	kq = (a*10 + 0.5)/10;
	return kq;
}

int main(int argc, char *argv[]) {
	float W,H, BMI;
	std:: cout <<"W = ";	std:: cin >> W;
	std:: cout <<"H = ";	std:: cin >> H;
	BMI = W/(H*H);
	std:: cout.setf(std::ios::fixed);
    std:: cout.setf(std::ios::showpoint);
    std:: cout.precision(1);
    BMI = lamtron(BMI);
	if (BMI < 18.0) std:: cout << "suy dinh duong";
	if(BMI> 18.0) std:: cout <<"beo";
	if (BMI == 18.0) std:: cout <<"can doi";
	getch();
	return 0;
}
//sdkfdsk
