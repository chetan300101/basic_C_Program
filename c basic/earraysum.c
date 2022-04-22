//addition of array...

#include<stdio.h>
main()
{
	int x[10],i,osum=0,sum=0;
	
	printf("Enter the Array elements = ");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&x[i]);
	}

	printf("Addition of Array = ");

	for(i=0;i<5;i++)
	{
		if(x[i]%2==0)
		{
			sum=sum+x[i];
		}
	}
	printf("%d\n",sum);
	
}
