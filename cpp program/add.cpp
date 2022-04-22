// additon cpp

#include<iostream>
using namespace std;

main()
{
	int a,b,add,sub,mul;
	float div,mdiv;
	
	cout<<"Enter first Number = ";
	cin>>a>>b;
	
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	mdiv=a%b;
	
	cout<<"Addition of "<<a<<" + "<<b<<" = "<<add<<"\n";
	cout<<"Substraction of "<<a<<" - "<<b<<" = "<<sub<<"\n";
	cout<<"Multiplication of "<<a<<" * "<<b<<" = "<<mul<<"\n";
	cout<<"Division of "<<a<<" / "<<b<<" = "<<div<<"\n";
	cout<<"Modulo Division of "<<a<<" % "<<b<<" = "<<mdiv<<"\n";
}
