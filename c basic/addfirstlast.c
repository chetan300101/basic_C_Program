//To print the addition from the user define range
#include<stdio.h>
main()
{
	int i,a,b,sum=0;
	
	printf("Enter the two numbers = ");
	scanf("%d%d",&a,&b);
	
	if(a<b)
	{
		for(i=a;i<=b;i++)
		{
			sum=sum+i;
			
		}
		printf("Addition of number from a to b is =%d\n",sum);
	}
		else if(a>b)
	{
		for(i=b;i<=a;i++)
		{
			sum=sum+i;
		}
		printf("Addition is %d\n",sum);
	}
	
}
