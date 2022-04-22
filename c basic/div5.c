//To print numbers which is divisible by 5 upto n no
#include<stdio.h>
main()
{
	int i,no;
	
	printf("Enter The Number = ");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		if(i%5==0)
		{
			printf("%d\n",i);
		}
	}
}

