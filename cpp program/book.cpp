//book details show

#include<iostream>
using namespace std;

class book
{
	int book_id, price;
	char name[50],author[50];
	
	public:
	input()
	{
		cout<<"Enter Book id = ";
		cin>>book_id;
		
		cout<<"Enter Book Name = ";
		cin>>name;
		
		cout<<"Enter Book Author = ";
		cin>>author;
		
		cout<<"Enter Book Price = ";
		cin>>price;
	}
	output()
	{
		cout<<"\nBook Id\tBook Name\tBook Author\tBook Price\n";
		cout<<book_id<<"\t"<<name<<"\t\t"<<author<<"\t\t"<<price<<"\n";
	}
};

main()
{
	book bk;
	
	bk.input();
	bk.output();
	
}
