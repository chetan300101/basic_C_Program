// employee sheet

#include<iostream>
using namespace std;

class employee
{
	int em_id;
	char name[50];
	float bs,hra,da,ts;
	
	public:
	input()
	{
		cout<<"Enter Employee Id = ";
		cin>>em_id;
		cout<<"Enter Employee Name = ";
		cin>>name;
		cout<<"Enter Basic Salary = ";
		cin>>bs;
	
	}
	calc()
	{
		if(bs>=10000)
		{
			hra=bs*20/100;
			da=bs*80/100;
		}
		else if(bs>=20000)
		{
			hra=bs*25/100;
			da=bs*85/100;
		}
		else if(bs>=30000)
		{
			hra=bs*30/100;
			da=bs*90/100;
		}
		
		ts=bs+hra+da;
	}
	
	output()
	{
		cout<<"\nEm.Id\tName\t\tSalary\t\tTotal Salary\n";
		cout<<em_id<<"\t"<<name<<"\t\t"<<bs<<"\t\t"<<ts<<"\n";	
	}
};

 main()
{
	int c;
	cout<<"Enter Your Choice";
	s:
	cout<<"\n1.Add Employee Details\n2.Show Employee Details\n3.Exit\n";
	cin>>c;
	employee emp;
	switch(c)
	{
		case 1: emp.input();
				goto s;
				break;
		case 2:	emp.calc();
				emp.output();
				goto s;
				break;
		case 3:break;
		
}
}
