//To print the addition from the user define range
#include<stdio.h>
main()
{
	int i,a,b,sum=0;
	
	printf("Enter the two numbers");
	scanf("%d%d",&a,&b);
	
	if(a<b)
	{
		for(i=a;i<=b;i++)
		{
			sum=a+b;
			
		}
		printf("Addition is %d\n",sum);
	}
		else
	{
		for(i=b;i<=a;i++)
		{
			sum=sum+i;
		}
		printf("Addition is %d\n",sum);
	}
	
}
