//  5
// 4 4
//3 3 3
//2 2 2 2

#include<stdio.h>
main()
{
	int i,j,no,k;
	
	printf("Enter the number = ");
	scanf("%d",&no);
	
	for(i=5;i>=no;i--)
	{
		for(k=i-no;k>0;k--)
		{
			printf(" ");
		}
		for(j=5;j>=i;j--)
		{
			printf("%d ",i);
		}
		printf("\n");
	
	}
	
}
