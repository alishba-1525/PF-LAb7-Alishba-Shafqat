//way to find factorial... we will find factorial by following way:
//5*4*3*2*1=120
#include<iostream>
using namespace std;
int main()
{
	int n;                      //long int is user for values having 4 or more than 4 digits from negative to positive(it can exced to 100 or more than 100 too)
	long factorial=1.0;          //1 tk initialize kia hai take 1 tk hi value multiply ho 
    cout<<"enter a positive integer";
	cin>>n;
	if (n<0)
	cout<<"Error!factorial of a negative number doeasn't exist"<<endl;
	else
	{
		for(int i=1;i<=n;i++)
		{
			factorial *= i;
			
		
		}
		cout<<"factorial of "<<n<<"="<<factorial<<endl;
	}
	return 0;
}