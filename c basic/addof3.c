//to print the reverse number

#include<stdio.h>

main()
{
	int no,result=0,rem;
	
	scanf("%d",&no);
	
	while(no!=0)
	{
		rem=no%10;
		result=result+rem;
		no=no/10;
	}
	
	printf("Addition of numbers is = %d",result);
}
