//reverse number without using loop

#include<iostream>
using namespace std;

main()
{
	int n,d1,d2,rev,n3;
	
	cout<<"Enter The Number = ";
	cin>>n;
	
	if(n>=10 && n<=99)
	{
		d1= n/10;
		d2= n%10;
		rev= d2*10+d1;
		cout<<"Reverse Number is = "<<rev;
	}
	else if(n>=100 && n<=999)
	{
		d1= n/100;
		int n1= n%100;
		d2= n1/10;
		int d3=n1%10;
		
		rev=  d3*100+d2*10+d1;
		
		cout<<"Reverse Number is = "<<rev;
	}
	
	else if(n>=1000 && n<=9999)
	{
		d1= n/1000;
		int n1= n%1000;
		int d2= n1/100;
		int n2=n1%100;
		int d3=n2/10;
		int d4=n2%10;
		
		rev=d4*1000+d3*100+d2*10+d1;
		
		cout<<"Rever number is = "<<rev;
	}
	
	else
	{
		d1=n/10000;
		int n1=n%10000;
		d2=n1/1000;
		int n2=n1%1000;
		int d3=n2/100;
		int n3=n2%100;
		int d4=n3/10;
		int d5=n3%10;
		
		rev= d5*10000+d4*1000+d3*100+d2*10+d1;
		
		cout<<"5 digit reverse number is = "<<rev;	
		
	}
	
}
