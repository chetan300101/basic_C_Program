//     5
//    5 4
//   5 4 3

#include<stdio.h>
main()
{
	int i,j,k,no;
	
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
			printf("%d ",j);
		}
		printf("\n");
	}
}
