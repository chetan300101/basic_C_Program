//To print numbers which is divisible by 3 from first 100 nos
#include<stdio.h>
main()
{
	int i;
	
	for(i=1;i<=100;i++)
	{
		if(i%3==0)
		{
			printf("%d\n",i);
		}
	}
}

