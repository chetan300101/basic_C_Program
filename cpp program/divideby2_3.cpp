// 

#include<iostream>
using namespace std;

main()
{
	int n;
	
	cout<<"Enter Number = ";
	cin>>n;
	
	if(n%2!=0 && n%3!=0)
	{
		cout<<"No "<<n<<" is not divisible by 2 & 3";	
	}
	else if(n%2==0 && n%3!=0)
	{
		cout<<"No "<<n<<" is  divisible by 2";
	}
	else if(n%2!=0 && n%3==0)
	{
		cout<<"No "<<n<<" is divisible by 3";
	 }
	else
	{
		cout<<"No "<<n<<" is divisible by 2 & 3";
	}
}
