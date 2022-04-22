////     1
///    	* * 
///    2 2 2

#include<stdio.h>
main()
{
	int i,j,k=0,l,no;
	
	printf("Enter the number =");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		for(l=no-i;l>0;l--)
		{
			printf(" ");
		}
	 for(j=1;j<=i;j++)
	 {
		if(i%2==0)
		{
			printf("* ");	
		}	
		else
		{
			printf("%d ",k);
		}
	 }	
	 
	
	if(i%2!=0)
	{
		k++;
	}
	printf("\n");
}
}
