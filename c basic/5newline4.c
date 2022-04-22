//   5 4 3 2 1
//    4 3 2 1
//     3 2 1
#include<stdio.h>
main()
{
	int i,j,k,n;
	
	printf("Enter the number = ");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		for(k=n-i;k>0;k--)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
