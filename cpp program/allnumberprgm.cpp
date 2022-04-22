//////application for program related to number

#include<iostream>
using namespace std;

int c;

add()
{
	int a,b,c;
	
	cout<<"Enter Two numbers = ";
	cin>>a>>b;
	
	c=a+b;
	cout<<"Addition of "<<a<<" & "<<b<<" = "<<c;
}

sub()
{
	int a,b,c;
	
	cout<<"Enter Two numbers = ";
	cin>>a>>b;
	
	c=a-b;
	cout<<"Substraction of "<<a<<" & "<<b<<" = "<<c;
}

mul()
{
	int a,b,c;
	
	cout<<"Enter Two numbers = ";
	cin>>a>>b;
	
	c=a*b;
	cout<<"Multiplication of "<<a<<" & "<<b<<" = "<<c;
}

div()
{
	int a,b,c;
	
	cout<<"Enter Two numbers = ";
	cin>>a>>b;
	
	c=a/b;
	cout<<"Division of "<<a<<" & "<<b<<" = "<<c;
}




amstrong()
{
	int n,rem,sum=0,no;
	
	cout<<"Enter the Number = ";
	cin>>n;
	no=n;
	while(n!=0)
	{
		rem=n%10;
		sum=sum+rem*rem*rem;
		n=n/10;
	}
	if(sum==no)
	{
		cout<<"The Number "<<no<<" is Amstrong\n";
	}
	else
	{
		cout<<"The number "<<no<<" is not Amstrong\n";
	}
}

fibo()
{
	int i,n1=0,n2=1,n3,p,t;
	
	cout<<"Enter Last Number for Fibbonacci series = ";
	cin>>p;
	cout<<"The Fibbonacci series is = "<<n1<<"\t"<<n2<<"\t";
	
	for(i=0;i<p;i++)
	{
		n3=n2+n1;
		
		cout<<n3<<"\t";
		
		t=n1;
		n1=n2;
		n2=n3;
	}
}

fact()
{
	int i,n,fact=1;
	
	cout<<"Enter The Number for Factorial = ";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;	
	}
	cout<<"Factorial of Number "<<n<<" is = "<<fact;
}

prime()
{
	int n,i,f=0;
	
	cout<<"Enter the Number = ";
	cin>>n;
	
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			f=1;
		}
	}
	if(f==0)
	{
		cout<<"The Number "<<n<<" is Prime Number";
	}
	else
	{
		cout<<"The Number "<<n<<" is Not Prime Number";
	}
}

palli()
{
	int n,i,t,rev=0,rem;
	
	cout<<"Enter number = ";
	cin>>n;
	t=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;	
	}
	if(rev==t)
	{
		cout<<"The Number "<<t<<" is Pallindrome";
	}
	else
	{
		cout<<"The Number "<<t<<" is Not Pallindrome";
	}
	}

reverse()
{
	int n,i,t,rev=0,rem;
	
	cout<<"Enter number for Reverse = ";
	cin>>n;
	t=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;	
	}
	
		cout<<"The Reverse Number is = "<<rev;
	}
	
	
great()
{
	int a,b,c;
	
	cout<<"Enter 3 Numbers = ";
	cin>>a>>b>>c;
	
	if(a>b && a>c)
	{
		cout<<"a no "<<a<<" is Greater Number";
	}
	else if(b>a && b>c)
	{
		cout<<"b no "<<b<<" is Greater Number";
	}
	else
	{
		cout<<"c no "<<c<<" is Greater Number";
	}
}


main()
{
	int c;
	
	s:
	cout<<"\n\n\t\t\t\t\t\t\t\tMenu\n1. Addition of Two Numbers\n2. Substraction of Two Number\n3. Multiplication of Two Numbers\n4. Division of Two Numbers \n5. Amstrong Number \n6. Fibbonacii Series\n7. Factorial of given Number\n8. Prime Number\n9. Pallindrome Number\n10. Reverse Number\n11. Greater number from 3 Numbers\n12. Exit";
	cout<<"\n\nEnter Your Choice = ";
	cin>>c;
	
	switch(c)
	{ 
		case 1: add();
				goto s;
				break;
		
		case 2: sub();
				goto s;
				break;
				
		case 3: mul();
				goto s;
				break;
		
		case 4: div();
				goto s;
				break;
		
		case 5: amstrong();
				goto s;
				break;
				
		case 6: fibo();
				goto s;
				break;
				
		case 7: fact();
				goto s;
				break;
				
		case 8: prime();
				goto s;
				break;
		
		case 9: palli();
				goto s;
				break;
		
		case 10: reverse();
				goto s;
				break;
			
		case 11: great();
				 goto s;
				 break;
				 	
		case 12: break;
		
				
		}
}
