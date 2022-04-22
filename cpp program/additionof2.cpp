/// addition of two number in cpp

#include<iostream>
using namespace std;
void add();

void add()
{
	int a,b,s;
	cout<<"Enter Two Numbers = ";
	cin>>a>>b;
	
	s=a+b;
	cout<<"Addition of "<<a<<" and "<<b<<" = "<<s;
}
main()
{
	add();
	cout<<"\n*********** \n";
	add();
	cout<<"\n----------- \n";
	add();
}
