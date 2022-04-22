//to print the addition of even and odd numbers from the user defined values
#include<stdio.h>
main()
{
	int i,a,b,esum=0,osum=0;
	
	printf("Enter the two numbers");
	scanf("%d%d",&a,&b);

	  if(a<b)
	    {
	    	for(i=a;i<=b;i++)
			{
				if(i%2==0)
				{
					esum=esum+i;
				}	
				else
				{
					osum=osum+i;
				}
			}
			
				
		}	
	else
	{
		for(i=b;i<=a;i++)
		{
			if(i%2==0)
			{
				esum=esum+i;
			}
			else
			{
				osum=osum+i;	
			}
		}
		
		 
	}
		printf("Addition is %d\n",esum);
		printf("Addition is %d\n",osum);
}
