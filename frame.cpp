#include <iostream>
#include <string>

using namespace std;

void main(){
	string name ;
	int i, j;
	cout << "Moi ban nhap ten: ";
	getline(cin, name);
	int leng = name.length();
	int n = 16 + leng;
	for (i = 1; i <= 5; i++)
	{
		if (i == 1){
			for (j = 1; j <= n; j++) cout << "*";
		}
		
		if (i == 2){
			for (j = 1; j <= 1; j++) cout << "*";
			for (j = 2; j <= n - 1; j++) cout << " ";
			for (j = n; j <= n; j++) cout << "*";
		}
		if (i == 3){
			for (j = 1; j <= 1; j++) cout << "*";
			for (j = 2; j <= 4; j++) cout << " ";
			cout << "Hello, " << name << "!";
			for (j = n - 3; j <= n - 1; j++) cout << " ";
			cout << "*";
		}
		if (i == 4){
			for (j = 1; j <= 1; j++) cout << "*";
			for (j = 2; j <= n - 1; j++) cout << " ";
			for (j = n; j <= n; j++) cout << "*";
		}
		if (i == 5){
			for (j = 1; j <= n; j++) cout << "*";
		} 
		cout << "\n";
	}
	
	system("pause");
}
