
#include<iostream>
using namespace std;

int main()
{
	struct Author
	{
		string name,email;
		char gender;
		printAuthor()
		{
			cout<<"Author's name: "<<name<<endl;
			cout<<"Author's email: "<<email<<endl;
			cout<<"Author's gender: "<<gender<<endl;
		}

		readAuthor()
		{
			cout<<"Enter author's name: ";
			cin>>name;
			cout<<"Enter author's email: ";
			cin>>email;
			cout<<"Enter author's gender: ";
			cin>>gender;
		}
	};

	struct Book
	{
		string title;
		int page;
		float price;
		//struct Author author;
		Author author;
		printBook()
		{
			cout<<"Book's title: "<<title<<endl;
			cout<<"No of pages: "<<page<<endl;
			cout<<"Price: "<<price<<endl;
			author.printAuthor();
			cout<<endl;
		};
		readBook()
		{
			cout<<"Enter title: ";
			cin>>title;
			cout<<"Enter no. of pages: ";
			cin>>page;
			cout<<"Enter price: ";
			cin>>price;
			author.readAuthor();
		};


	};

	int noofBooks;
	cout<<"Enter number of books: ";
	cin>>noofBooks;
	struct Book books[noofBooks];

	for(int i=0;i<noofBooks;i++)
	{
		books[i].readBook();
	}

	cout<<"The details of the book: "<<endl;

	for(Book book:books)
	{
		book.printBook.printAuthor();
	}

	cout<<"The details of the books greater than 500: "<<endl;
	for(Book book:books)
	{
		if(book.page>500)
		{
			book.printBook();
		}
	}





	return 0;
}
