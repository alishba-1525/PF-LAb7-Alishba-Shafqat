#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream file("newfile.txt") ; 
     file<<"alishba";
     file.close();
	
	string Text;
	ifstream readfile("newfile.txt");
	while	(getline(readfile,Text))
    {
	   cout<<Text;
	}	
	readfile.close();
	
	return 0;
}