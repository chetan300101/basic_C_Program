// 1 1 1 1 1
// 2 2 2 2
//incomplete
#include<stdio.h>
main()
{
	int i,j,k,no;
	printf("Enter the number = ");
	scanf("%d",&no);
	
	for(i=no;i>=1;i--)
	{
		for(k=no-i;k>0;k--)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d ",i);
		}
		printf("\n");
	
	}

}
