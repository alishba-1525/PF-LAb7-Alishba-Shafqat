#include <iostream>
#include <string>
using namespace std;

struct studentInfo 
{
    string name;
    string sapID;
    string address;
    string department;
    int marks1;
    int marks2;
};


int maxMarks(const studentInfo &student) 
{
    return (student.marks1>student.marks2)?student.marks1:student.marks2;
}

void displayInfo(const studentInfo &student) 
{
    cout<<"Student Information:"<<endl;
    cout<<"Name:"<<student.name<<endl;
    cout<<"SAP ID:"<<student.sapID<<endl;
    cout<<"Address:"<<student.address<<endl;
    cout<<"Department:"<<student.department<<endl;
    cout<<"Marks in Subject 1:"<<student.marks1<<endl;
    cout<<"Marks in Subject 2:"<<student.marks2<<endl;
    cout<<"Maximum Marks:"<<maxMarks(student)<<endl;
}

int main()
{
    const int studentinformation=5; 
    studentInfo students[studentinformation];

    for (int i=0;i<studentinformation;i++) 
	{
        cout<<"Enter details for Student"<< i+1<<":"<<endl;
        cout<<"Name:";
        getline(cin, students[i].name);
        cout<<"SAP ID: ";
        getline(cin, students[i].sapID);
        cout<<"Address: ";
        getline(cin, students[i].address);
        cout<<"Department: ";
        getline(cin, students[i].department);
        cout<<"Marks in Subject 1: ";
        cin>>students[i].marks1;
        cout<<"Marks in Subject 2: ";
        cin>>students[i].marks2;
        cin.ignore();
    }

    for (int i=0;i<studentinformation;i++) 
	{
        displayInfo(students[i]);
    }

    return 0;
}
