   //to print the amstrong number

#include<stdio.h>

main()
{
	int no,num,rem,sum=0;
	
	scanf("%d",&no);
	num=no;
	
	 while(no!=0)
	{
		rem=no%10;
		sum=sum + rem*rem*rem;
		no = no/10;
	}
	
	if(sum==num)
	{
		printf("The number is Amstrong");
	}
	else
	{
		printf("The number is Not a Amstrong");
	}
}

  
