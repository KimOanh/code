#include <iostream> 

using namespace std;



void main()
{
	int p;
	float r, m;
	cout << "Nhap m, p: ";
	cin >> m >> p;
	cout << "Nhap r: ";
	cin >> r;
	float S = m;
	int i = 0;
	while (S < p){
		S = m + m*0.14;
		m = S;
		i++;
	}
	cout << "Sau " <<i<<" nam so tien la: "<< S;
	
	system("pause");
}
