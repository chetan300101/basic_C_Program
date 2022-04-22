//odd number and divisible ny 3

#include<iostream>
using namespace std;

main()
{
	int n;
	
	cout<<"Enter the Number = ";
	cin>>n;
	
	if(n%2!=0 && n%3==0)
	{
		cout<<"Number "<<n<<" is Odd & Divisible by 3";
	}
	else if(n%2==0 && n%3==0)
	{
		cout<<"Number "<<n<<" is even & divisble by 3";
	}
	else
	{
		cout<<"Number "<<n<<" is even & not divisible by 3";
	}
}
