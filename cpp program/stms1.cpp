// student marksheet 

#include<iostream>
using namespace std;
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
	int rn,m1,m2,m3,s;
	float total,per;
	char name[20],div[10];
	bdate b;
	public:
	
	input()
	{
		cout<<"\nEnter Student Roll No = \n";
		cin>>rn;
		cout<<"Enter Student Name = \n";
		cin>>name;
		cout<<"Enter Student Division = \n";
		cin>>div;
		cout<<"Enter Student Marks of 3 Subject = \n";
		cin>>m1>>m2>>m3;
		b.inputd();
		
		
	}
	
	calc()
	{
		total=m1+m2+m3;
		per=total/3;
		
	}
	
	output()
	{
		calc();
		cout<<rn<<"\t\t"<<name<<"\t\t";
		b.outputd();
		cout<<"\t\t"<<div<<"\t\t\t"<<m1<<" "<<m2<<" "<<m3<<"\t "<<total<<"\t\t"<<per<<"\t\t ";
		
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
			cout<<"\tpass\n";
		}
		else
		{
			cout<<"\tfail\n";
		}
	}
	float getper()
	{
		return(per);
	}
};

main()
{
	int p,i,s;
	float sum=0;
	
	cout<<"Enter How many records You want to enter = ";
	cin>>p;
	
	student std[p];
	
	for(i=1;i<=p;i++)
	{
	 	std[i].input();
	}
	
	cout<<"\n\t\t\t\t\t -------------Student Details-------------- \t\t\t\t\t\t \n";
	cout<<"\nRoll No\t\tName\t\tDate of Birth\t\tDivision\t\tMarks\t\tTotal\t\tPercentage\t\tGrade";
	cout<<"\n";
	
	for(i=1;i<=p;i++)
	{
		std[i].output();
	
		if(sum<std[i].getper())	
		{
			sum=std[i].getper();
		}
	
	}  
		cout<<"\n\nHighest Percentage is = "<<sum;
}
