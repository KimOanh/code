#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void main()
{
	srand(time(0));
	int n = rand()%100 + 1;
	int x;
	cout << "Nhap so x bat ky: ";
	cin >> x;
	if (x < n) cout << "n > x";
	else if (x > n) cout << "n < x";
	else cout << "CHINH XAC!";
	while (n != x){
		cout << "\nNhap so x bat ky: ";
		cin >> x;
		if (x < n) cout << "n > x";
		else if (x > n) cout << "n < x";
		else cout << "CHINH XAC!";
	}
	system("pause");
}