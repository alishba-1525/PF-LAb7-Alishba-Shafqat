#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char source[]="hello world";
	char destination[50];  //[50] mtlb bss 50 characters aa skte .. 50 se zyada age char hain toh copy na kre
	
	//use strcpy() to copy source into destination
	
strcpy(destination, source);
cout<<"source string:"<<source<<endl;
cout<<"destination string:"<<destination<<endl;

return 0;
}
