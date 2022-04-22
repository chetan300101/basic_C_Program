//amstrong number

#include<stdio.h>
main()
{
	
	int r,res=0,no,n;
	
	printf("Enter the Number = ");
	scanf("%d",&no);
	n=no;
	while(no!=0)
	{
		r=no%10;
		res=res + r*r*r;
		no=no/10;
	}
	if(n==res)
	{
		printf("The Number is Amstrong Number...!");
	}
	else
	{
		printf("The Number is Not Amstrong Number ...!");
	}
}
