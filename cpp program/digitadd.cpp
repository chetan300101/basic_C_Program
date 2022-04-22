// addition of digits //56 = //5+6=11

#include<iostream>
using namespace std;

main()
{
	int no,d1,d2,s;
	
	cout<<"Enter Two Digit Number = ";
	cin>>no;
	
	d1=no/10;
	d2=no%10;
	s=d1+d2;
	int rev=d2*10+d1;
	
	cout<<"Addition of digits = "<<s<<"\n";
	cout<<"Reverse number is = "<<rev;

}
