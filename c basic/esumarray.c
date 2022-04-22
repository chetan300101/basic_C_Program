//odd addition of array

#include<stdio.h>
main()
{
	int x[10],i,sum=0;
	
	printf("Enter Array elements = ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("Addition is = ");
	for(i=0;i<10;i++)
	{
		if(x[i]%2!=0)
		{
			sum=sum+x[i];
		}
	}
		printf("%d",sum);
}
