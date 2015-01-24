#include <iostream>
#include <conio.h>

using namespace std;
int n;

int deQuy(int n)
{
	int kQ;
	if (n == 1) kQ = 1;
	if (n== 2) kQ = 3;
	if (n >= 3)kQ = deQuy(n-1)*deQuy(n-1) - 2*deQuy(n-2);
	return kQ;
}
/* cách 2:
	int deQuy(int n)
{
	if (n == 1) return 1;
	if (n== 2) return 3;
	if (n >= 3)return deQuy(n-1)*deQuy(n-1) - 2*deQuy(n-2);
}
*/
int main(int argc, char *argv[]) {
	cout <<"Nhap n: "; 
	cin >> n;
	cout <<"kq la: " << deQuy(n);
	getch();
	return 0;
}
