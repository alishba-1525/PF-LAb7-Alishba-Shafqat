#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter positive integer"<<endl;
	cin>>n;
	long factorial=1;
	{
		cout<<"you entered a negative number"<<endl;
	}
	if(n<0)
   {
	cout<<"number is negative"<<endl;
   }
	else
	{
		int i=1;
		do
		{
			factorial*=i;
			i++;
		}
		while(i<=n);
		{
		cout<<"factorial of"<<n<<"is"<<factorial<<endl;
	}
    }
	return 0;
}
		