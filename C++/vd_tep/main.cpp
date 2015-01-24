#include <iostream>
#include <fstream>
#include <string>
// de thuc hien duoc voi file can include cai do
using namespace std;
int main(int argc, char *argv[]) {
 ofstream f1 ("D:\\text1.txt"); //thao tac gan tep de ghi
 ifstream f2 ("D:\\text2.txt"); // thao tac gan file de doc :D
 int a,b,c;
 float dtb;
 int i = 0,n = 0;
 string chu;
 while ( !f2.eof() )
 	{f2 >> chu;
 	f1 << chu << endl;
 	} 
 f2.close();
 f1.close();
 return 0;
}
