// diamond

#include<stdio.h>
main()
{
	int i,j,k,count=1;
	
	for(i=1;i<=5;i++)
	{
		for(k=5-i;k>0;k--)
		{
			printf(" ");
		}
		
		for(j=1;j<=i;j++)
			{
				printf("%d ",count++);
			}
		printf("\n");
	}
}

