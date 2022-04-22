//to print the addition of first and last number

#include<stdio.h>
main()
{
	int i,n1,n2,sum=0;
	
	printf("Enter the numbers ");
	scanf("%d%d",&n1,&n2);
	
	if(n1<n2)
	{
		for(i=n1;i<=n2;i++)
		{
			sum=sum+i;
			
		}
		printf("Addition is = %d ",sum);
	}
	else if(n1>n2)
	{
		for(i=n2;i<=n1;i++)
		{
			sum=sum+i;
			
		}
		printf("Addition is = %d ",sum);
	}
	
}
