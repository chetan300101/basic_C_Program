//   A
//  A B 
// A B C

#include<stdio.h>
main()
{
	int i,j,no,k;
	
	printf("Enter the number");
	scanf("%d",&no);
	
	for(i=65;i<=no;i++)
	{
		for(k=no-i;k>0;k--)
		{
			printf(" ");
		}
		for(j=65;j<=i;j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}	


}
