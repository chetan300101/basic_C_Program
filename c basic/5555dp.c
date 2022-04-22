// 5 5 5 5 5
// 4 4 4 4

#include<stdio.h>
main()
{
	int i,j,no,k;
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
		//no=no-1;
	}

}
