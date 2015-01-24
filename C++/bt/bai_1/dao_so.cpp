#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int tru(int a, int b)
{
	return a - b;
}

int dao(int a)
{
	
}

int main()
{
	int n,a = 0, i=0;
	cout << "Nhap n: ";
	cin >> n;
	int n2 = n; int n3 = n;
	while (n != 0)
	{
		a = n%10;
		n = n/10;
		i++;
	}
	int daoso = 0;
	while (n2 != 0)
	{	--i;
		a = n2%10;
		n2 = n2/10;
		daoso = daoso + a*pow(10,i);	
	}
	cout << "So sau khi dao la: " << daoso;
	cout << " ket qua= " << tru(n3,daoso);
	getch();
	return 0;
}
