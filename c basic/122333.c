// 1 
// 2 2
// 3 3 3

#include<stdio.h>
main()
{
	int i,j,k,n;
	
	printf("Enter the number = ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(k=n-i;k>0;k--)
		{
			printf(" ");
		}
			for(j=1;j<=i;j++)
			{
				printf("%d ",i);
			}
			printf("\n");
		}
	}
 
