#include<iostream>
using namespace std;

void passByValue(int num)
{
	num=num+10;
	cout<<"inside function(Pass By Value)"<<num<<endl;
}
int main()
{
	int number=5;
	cout<<"before function call"<<number<<endl;
	passByValue(number);
	return 0;
	
}