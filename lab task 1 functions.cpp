#include <iostream>
#include <string>
using namespace std;

struct book 
{
    string title;
    string author;
    int year;
    int pages;
};

void inputbookInfo(book &book)
{
    cout<<"enter title of book: ";
    getline(cin, book.title);
    cout<<"enter author of book: ";
    getline(cin, book.author);
    cout<<"enter publication year of book: ";
    cin>>book.year;
    cout<<"enter number of pages present in book: ";
    cin>>book.pages;
    cin.ignore(); 
}


void displayBookInfo(const book &book) 
{
    cout<<"Title: "<<book.title<<endl;
    cout<<"Author: "<<book.author<<endl;
    cout<<"Year of Publication:"<<book.year<<endl;
    cout<<"Number of Pages:"<<book.pages<<endl;
}

int main() 
{
    const int bookNumber=5; 
    book books[bookNumber];


    for(int i=0;i<bookNumber;i++) 
	{
        cout<<"\nEnter information for book "<<i+1<<":\n";
        inputbookInfo(books[i]);
    }

  
    cout<<"\nBook Information:\n";
    for(int i=0;i<bookNumber;i++)
	{
        cout<<"\nBook "<<i+1<<":\n";
        displayBookInfo(books[i]);
    }

    return 0;
}
