// Addition of diagonal elements of matrix

#include<stdio.h>
main()
{
	int A[3][3],B[3][3],C[3][3],i,j;
	
	printf("Enter the Elements of A = ");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("\nMatrix Elements\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
	
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	printf("\nMatrix Elements\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",B[i][j]);
		}
		printf("\n");
	}
	printf("\nAddition of A & B = \n");
	
	for(i=0;i<3;i++)
	{
	
		for(j=0;j<3;j++)
		{
				C[i][j]=A[i][j]+B[i][j];
				printf("%d\t",C[i][j]);
		}
			printf("\n");
		
	}
}
