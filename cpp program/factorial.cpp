// factorial of given number      

#include<iostream>
using namespace std;

int fact(int b)
{
	int fact=1;
	for(int i=1;i<=b;i++)
	{
		fact = fact * i;	
	}
	return(fact);
	
}

int main()
{
	int a,s,p;
	cout<<"Enter The Number = ";
	`-cin>>a;
	
	s=fact(a);
	cout<<"Factorial of "<<a<<" = "<<s;
}


