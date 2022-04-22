// To print the columnwise addition of given matrix

#include<stdio.h>
main()
{
	int arr[3][3],i,j,sum=0;
	
	printf("Enter Array Elements = ");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Array Elements are = \n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0;i<3;i++)
	{
		sum=0;
		
		for(j=0;j<3;j++)
		{
			sum=sum+ arr[j][i];
		}
			printf("Addition is = %d\n",sum);
	}
	

}
