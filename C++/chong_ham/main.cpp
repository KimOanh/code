#include <iostream>
#include <conio.h>

using namespace std;

float tong (int a, float b)
{
	return a + b;
}

int tong(int a, int b)
{
	int tong = a + b;
	return tong;
}
float tong(float a, float b)
{
	return a + b;
}
float tong(float a, int b)
{
	return a + b;
}
int main(int argc, char *argv[]) {
	float a = 2.2; int b = 4;
	cout << tong(a,b);
	getch();
	return 0;
}
