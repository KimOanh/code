#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
	ifstream file_vao("C:\\Users\\Dinh\\Desktop\\C++\\tep\\bai_tap.txt");
	ofstream file_ra("C:\\Users\\Dinh\\Desktop\\C++\\tep\\bai_tap1.txt");
	int a[100], i = 0, n =0;
	while (!file_vao.eof())
	{	
		file_vao >> a[i];
		cout << a[i] << endl;
		i++;
		n++;
	}
	
	for (i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++ )
		{
			if (a[i] > a[j])
			{
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}

	for (i = 0; i < n; i++)
	{
		file_ra << a[i] << endl;
	}
	file_vao.close();
	file_ra.close();
	return 0;
}
