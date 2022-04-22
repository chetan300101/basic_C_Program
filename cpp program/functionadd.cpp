/// addition of two number in cpp

#include<iostream>
using namespace std;

int add(int a, int b)
{	
	//int	s=a+b;
	return(a+b);
}

int sub(int a, int b)
{	
	int	s=a-b;
	return(s);
}

int mul(int a, int b)
{	
	int	s=a*b;
	return(s);
}

int div(int a, int b)
{	
	int	s=a/b;
	return(s);
}

main()
{
	int a,b,s,c;
	cout<<"Enter Two Numbers = ";
	cin>>a>>b;
	
	s:
		
	cout<<"\nEnter Your choice = ";
	cout<<"\n1. Addition\n"<<"2. Substraction\n"<<"3. Multiplication\n"<<"4. Division\n"<<"5. Exit\n";
	cin>>c;
	
	switch(c)
	{
		case 1: s=add(a,b);
				cout<<"Addition of "<<a<<" & "<<b<<" = "<<s<<"\n";
				goto s;
				break;
				
 		case 2: s=sub(a,b);
				cout<<"Substraction of "<<a<<" & "<<b<<" = "<<s<<"\n";
				goto s;
				break;
				
		case 3: s=mul(a,b);
				cout<<"Multiplication of "<<a<<" & "<<b<<" = "<<s<<"\n";
				goto s;   
				break;
				
		case 4: s=div(a,b);
				cout<<"Division of "<<a<<" & "<<b<<" = "<<s<<"\n";
				goto s;
				break;
				
		case 5: break;
				
		default: cout<<"Wrong input...!";
		
	}
 	
	
}
