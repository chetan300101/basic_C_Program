//addition of single array...

#include<stdio.h>
main()
{
	int x[10],i,sum=0;
	
	printf("Enter the Array elements = ");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("Addition of Array = ");
	for(i=0;i<5;i++)
	{
		sum=sum+x[i];
	}
	printf("%d\n",sum);
}
