#include <iostream>
#include <string>
using namespace std;


struct user 
{
    string name;
};

bool login(user &user) 
{
    string username;
    cout << "Enter your username: ";
    getline(cin, username);


    if (username=="personal user") 
	{
        user.name=username;
        return true;
    } else 
	{
        cout<<"Invalid username. Login failed."<<endl;
        return false;
    }
}

void welcomeMessage(const user &user) 
{
    cout<<"Welcome "<< user.name<<endl;
}

int main() 
{
    user user;
    if(login(user))
	{
      
        welcomeMessage(user);
    } else 
	{
        cout << "invalid!try again"<<endl;
    }

    return 0;
}
