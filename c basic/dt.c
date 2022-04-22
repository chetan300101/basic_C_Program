//2.	To check given date is valid or invalid.
#include<stdio.h>
main()
{
	int dt;
	
	printf("Enter the date = ");
	scanf("%d",&dt);
	
	if(dt<=31)
	{
		printf("Date is valid");
	}
	else 
	{
		printf("Date is invalid");
	}
}
