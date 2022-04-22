// student marksheet using constructor

#include<iostream>
using namespace std;

int i,p;
class stud
{
	int rn,m1,m2,m3,p,i;
	float tot,per;
	char name[20];
	public:
		
	stud()
	{	
			cout<<"Enter Student Roll No = ";
			cin>>rn;
			cout<<"Enter Student Name = ";
			cin>>name;
			cout<<"Enter 3 Subject marks = ";
			cin>>m1>>m2>>m3;
			calc();	 
	}
	
	calc()
	{
		tot=m1+m2+m3;
		per=tot/3;
	}

	output()
	{
	
		cout<<rn<<"\t\t"<<name<<"\t\t"<<m1<<" "<<m2<<" "<<m3<<"\t\t"<<tot<<"\t\t"<<per<<"\n";
	}
};

main()
{
	
	
	cout<<"How many Records you want to Enter = ";
	cin>>p;
	
	stud s[p];
	cout<<"Roll No\t\tName\t\ tMarks\t\t\tTotal\t\tPer\n";
	
	for(i=0;i<p;i++)
	{
		s[i].output();
	}
}
