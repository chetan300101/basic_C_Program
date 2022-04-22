// class and object

#include<iostream>
using namespace std;

class student
{
	int rn,m1,m2,tot;
	char name[20];
	float per;
	public:
	input()
	{
		cout<<"Enter rn name m1 m2 ";
		cin>>rn>>name>>m1>>m2;
	}
	calc()
	{
		tot=m1+m2;
		per=tot/2.0;
	}
	output()
	{
		cout<<"rn"<<"\t"<<"name"<<"\t"<<"m1"<<"\t"<<"m2"<<"\t"<<"total"<<"\t"<<"percentage \n";
		cout<<rn<<"\t"<<name<<"\t"<<m1<<"\t"<<m2<<"\t"<<tot<<"\t"<<per<<"\n";
	}
};

main()
{
	student st;
	
	st.input();
	st.calc();
	st.output();
}
