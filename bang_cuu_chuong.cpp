#include <iostream>

using namespace std;

void main()
{
	int i, j, n;
	for (i = 1; i <= 2; i++)
	{
		if (i == 1){
			for (j = 1; j <= 9; j++)
			{
				cout << " ";
				cout << "\t" << j;
			}
			cout << "\n";
		}

		if (i == 2){
			for (j = 1; j <= 9; j++)
			{
				cout << " ";
				cout << "\t" << "-";
			}
			cout << "\n";
		}
	}
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			int a = i*(j-1);
			if (j == 1) cout << i << "|";
			else cout << "\t" << a;
		}
		cout << "\n";
	}
	system("pause");
}