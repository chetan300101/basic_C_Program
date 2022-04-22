//rectangle cpp

#include<iostream>
using namespace std;

main()
{
	
	int len,bred,area,peri;
	
	cout<<"Enter Length = ";
	cin>>len;
	
	cout<<"Enter Breadth = ";
	cin>>bred;
	
	area=len*bred;
	peri=2*(len+bred);
	
	cout<<"\n"<<"Area of Rectangle = "<<area<<"\n";
	cout<<"Perimeter of Rectangle = "<<peri<<"\n";
	
}
