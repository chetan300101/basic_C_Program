//addition of even and odd number
#include<stdio.h>
main()
{
	int x[10],i,esum=0,osum=0;
	
	printf("Enter the number");
	
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
	printf("Addition Of Even Number = %d\n",esum);
    
     for(i=0;i<10;i++)
     {
     	if(x[i]%2==1)
     	{
     		osum=osum+x[i];
		 }
	 }
	 printf("Odd Number = %d",osum);
     
}
