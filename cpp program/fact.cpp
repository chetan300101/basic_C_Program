// factorical of number

#include<iostream>
using namespace std;

main()
{
	int n,fact=1,i;
	
	cout<<"Enter Number = ";
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
		
	}
	cout<<"Factorial of "<<n<<" = "<<fact;
}

