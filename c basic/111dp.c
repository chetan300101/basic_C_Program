
//    1
//   2 2
//  3 3 3
#include<stdio.h>
main()
{
	int i,j,k,no;

	printf("Enter the number = ");
	scanf("%d",&no);
	
	
		for(i=1;i<=no;i++)
	{
		for(k=no-i;k>0;k--)
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
