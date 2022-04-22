//to print the addition of first and last number

#include<stdio.h>
main()
{
	int n1,n2,sum=0;
	
	printf("Enter the numbers ");
	scanf("%d%d",&n1,&n2);
	
	if(n1<n2)
	{
		sum=n1+n2;
		printf("Addition is = %d ",sum);
	}
	else if(n1>n2)
	{
		sum=n1+n2;
		printf("Addition is =%d",sum);
	}
	
}
