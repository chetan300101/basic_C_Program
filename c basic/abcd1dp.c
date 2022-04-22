// a
// a b 
// a b c

#include<stdio.h>
main()
{
	int i,j,k,no;
	
	printf("Enter the number = ");
	scanf("%d",&no);
	
	for(i=97;i<=no;i++)
	{
		for(k=no-i;k>0;k--)
		{
			printf(" ");
		}
		for(j=97;j<=i;j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}	


}
