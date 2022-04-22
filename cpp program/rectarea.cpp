// area of rectangle and perimeter of rectangle

#include<iostream>
using namespace std;

class rectangle
{
	int l,b,a,p;
	
	public:
		input()
		{
			cout<<"Enter lenght & breadth of Rectangle = ";
			cin>>l>>b;
		}
		output()
		{
			a=l*b;
			p=2*(l+b);
			
			cout<<"\nlength = "<<l<<" Breadth = "<<b<<" Area = "<<a<<" Perimeter ="<<p;
		}
};

main()
{
	rectangle r,r1;
	
	r.input();
	r.output();
	
	r1=r;
	
	r1.output();
	
	
}
