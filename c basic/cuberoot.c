//prime no

#include<stdio.h>

main()
{
	int i,no,flag=0;
	
	printf("Enter any number = ");
	scanf("%d",&no);
	
	for(i=2;i<=no*1/2;i++)
	{
		if(no%1==0)
		{
			flag=1;
			break;
		}
		
	}
	if(flag==0)
	{
		printf("The number is prime");
	}
	else
	{
		printf("The number is not a prime no...!");
	}
}  
