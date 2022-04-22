//array addition 

#include<stdio.h>
main()
{
	int x[10],i,n,esum=0,osum=0;
	
	printf("Enter the numbers = ");
	
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&x[i]);
	}
	
	
		for(i=0;i<10;i++)
		{
			if(x[i]%2==0)
			{
				esum=esum+x[i];
			}
		}
		printf("Addition of even number is = %d\n",esum);
		
		for(i=0;i<10;i++)
		{
			if(x[i]%2==1)
			{
				osum=osum+x[i];
			}
		}
		printf("Addtion of odd number is = %d\n",osum);
}
