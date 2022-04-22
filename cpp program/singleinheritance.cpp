//// single inheritance
#include<iostream>
using namespace std;

class student
{
	public:
	int rn;
	char name[20];

		stud()
		{
			cout<<"Enter Student Roll no = ";
			cin>>rn;
			cout<<"Enter Student Name = ";
			cin>>name;
		}
};

class subject:public student
{
	int m1,m2;
	
	public:
		sub()
		{
			cout<<"Enter Student Marks = ";
			cin>>m1>>m2;
		}
		output()
		{
			cout<<"\nRoll No\tName\tMarks\n";
			cout<<rn<<"\t"<<name<<"\t"<<m1<<" "<<m2<<'\n';
		}
};

main()
{
	subject s;
	s.stud();
	s.sub();
	s.output();
}
