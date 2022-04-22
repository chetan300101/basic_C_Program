// marksheet using menu
#include<iostream>
#include<string.h>

using namespace std;

int p;
char up;

class bdate
{
	int d,m,y;
	public:
		
		inputd()
			{
				cout<<"Enter Student Birth Date = ";
				cin>>d;
				cout<<"Enter Student Birth Month = ";
				cin>>m;
				cout<<"Enter Student Birth Year = ";
				cin>>y;
			}
		
		outputd()
			{
				cout<<d<<"-"<<m<<"-"<<y<<"";
			}
			
			
};


class student
{
	int rn,m1,m2,m3,age,p,i;
	char name[20];
	float total,per;
	bdate b;
	
	public:
		
	add()
	{
		n:
		cout<<"\nEnter Student Roll No = ";
		cin>>rn;
		cout<<"Enter Student Name = ";
		cin>>name;
		cout<<"Enter 3 Subject Marks = ";
		cin>>m1>>m2>>m3;
		b.inputd();
		calc();
	}

	calc()
	{
		
		total=m1+m2+m3;
		per=total/3;
	}

	show()
	{
		cout<<rn<<"\t\t"<<name<<"\t\t";
		b.outputd();
		cout<<"\t\t"<<m1<<" "<<m2<<" "<<m3<<"\t"<<total<<"\t"<<per<<"\t";
			
		if(per>=66)
		{
			cout<<"\tDistinction\n";
			
		}
		else if(per>=60)
		{
			cout<<"\tFirst\n";
		}
		else if(per>=50)
		{
			cout<<"\tSecond\n";
		}
		else if(per>=40)
		{
			cout<<"\tPass\n";
		}
		else
		{
			cout<<"\tFail\n";
		}
		cout<<"-----------------------------------------------------------------------------------------------------------\n";
		
	}
	float getper()
	{
		return(per);
	}

};

main()
{
	int c,i=0,rl;
	float sum=0;
	student std[10];
	s:
	cout<<"\n\t\t\t\t\t\t\tMenu\t\t\t\t\t\t\t";
	cout<<"\n1. Enter Student Details\n2. Show Student Details\n3. Update Student Details\n4. Delete Student Details\n5. Exit\n";
	cout<<"Enter Your Choice = \n";
	cin>>c;
	
	switch(c)
		
		case 1: for(i=0;i<p;i++)
		{
			std[i].add();
			goto s;
			break;
		}
}
