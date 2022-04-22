//number divided by 5 upto n range

#include<stdio.h>

main()
{
	int i,n;
	printf("Enter any number \n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%5==0)
		{
			printf("The number is =%d\n ",i);
		}
	}
}
