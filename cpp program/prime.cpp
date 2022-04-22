// prime number using function in cpp

#include<iostream>
using namespace std;

void prime(int a)
{
	int f=0;
	
	for(int i=2;i<a/2;i++)
	{
		if(a%i==0)
		{
			f=1;
		}
	}
	
	if(f==0)
	{
		cout<<"The Number "<<a<<" is prime Number";
	}
	else
	{
		cout<<"The Number "<<a<<" is not prime number";
	}
}

main()
{
	int a;
	cout<<"Enter the Number ";
	cin>>a;
	
	prime(a);
}
