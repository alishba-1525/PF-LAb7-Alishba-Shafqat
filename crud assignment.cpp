#include<iostream>
using namespace std;

int i=0;
void add(int a[])
{
	cout<<"enter value you want to add"<<endl;
	cin>>a[i];
	i++;
	cout<<"added successfully"<<endl;
}

void exit(int a[])
{
	
}

void search(int a[])
{
	int n;
	cout<<"enter value you want to search"<<endl;
	cin>>n;
	for(int j=0;j<i;j++)
	{
		if(n==a[i])
		{
			cout<<"search value is:"<<a[j]<<endl;
		}
	}
}

void update(int a[])
{
	int n;
	cout<<"enter value you want to update"<<endl;
	cin>>n;
	for(int j=0;j<i;j++)
	{
		if(n==a[j])
		{
			cout<<"new value is:"<<a[j]<<endl;
			
		}
	}
}

void del(int a[])
{
	int n;
	cout<<"enetr value you want to delete"<<endl;
	cin>>n;
	for(int j=0;j<i;j++)
	{
		if(n==a[j])
		{
			for(int k=j;k<i;k++)
			{
				a[k]=a[k+1];
			}
		}
		i--;
		break;
	}
}

void show(int a[])
{
	for(int j=0;j<i;j++)
	{
		cout<<"\n"<<a[j];
	}
}
int main()
{
	cout<<"enter 1 to add"<<endl;
	cout<<"enter 2 to search"<<endl;
	cout<<"enter 3 to delete"<<endl;
	cout<<"enter 4 to update"<<endl;
	cout<<"enter 5 to show"<<endl;
	cout<<"enter 6 to exit"<<endl;
	

p:
	int choice;
	cout<<"enter your choice"<<endl;
	cin>>choice;
	int a[20];
	
	switch (choice)
	{
		case 1:
		add(a);
		break;
		
		case 2:
		search(a);
		break;
		
		case 3:
		del(a);
		break;
		
		case 4:
		update(a);
		break;
		
		case 5:
		show(a);
		break;
		
		case 6:
		exit(0);
		break;
		
		default:
		cout<<"INVALID! TRY AGAIN"<<endl;
		break;
	}
	goto p;
	
	return 0;
}