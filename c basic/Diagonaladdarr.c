// Addition of diagonal elements of matrix

#include<stdio.h>
main()
{
	int A[3][3],i,j,sum=0,osum=0;
	
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
			if(i==j)
			{
				sum=sum+A[i][j];
			}
			else
			{
				osum=osum+A[i][j];
			}
		}	
	}
	printf("Addtion of Diagonal elements is = %d\n",sum);
	printf("Addition of Non diagonal elements is = %d",osum);
}
