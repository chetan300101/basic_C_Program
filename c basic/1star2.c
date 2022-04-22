//         1
//        * *
//       2 2 2

#include<stdio.h>
main()
{
	int i,j,k,l=1,n;
	
	printf("Enter the number of line = ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(k=n-i;k>0;k--)
		{
			printf(" ");
		}
	for(j=1;j<=i;j++)
	{
		if(i%2==0)
		{
			printf("* ");
		}
		
		else
		{
			printf("%d ",l);
		}
		
	}
	printf("\n");
	if(i%2!=0)
	{
		 l++;
	}
}
}
