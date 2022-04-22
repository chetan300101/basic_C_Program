//To printf the even no. from a given numbers

#include<stdio.h>
main()
{
	int i,a,b;
	
	printf("Enter the starting and ending no");
	scanf("%d%d",&a,&b);
	
	for(i=a;i<=b;i++)
	{
		if(i%2==0)
		{
			printf("Even Numbers are %d\n",i);
		}
	}
	
}
