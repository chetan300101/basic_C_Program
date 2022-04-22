// to print the reverse of column of matrix

#include<stdio.h>
main()
{
	int A[3][3],i,j;
	
	printf("Enter the Array Elements = \n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	
	printf("Matrix elements are = \n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t ",A[i][j]);
		}
		printf("\n");
	}
	
	printf("The reverse column elements are = \n");
	
	for(i=2;i>=0;i--)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
}

