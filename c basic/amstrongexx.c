//amstrong.c

#include<stdio.h>
	
	
main()
{
	int n,rem,sum=0,no;
	
	printf("Enter the Number");
	scanf("%d",&n);
	no=n;
	while(n!=0)
	{
		rem=n%10;
		sum=sum+rem*rem*rem;
		n=n/10;
	}
	if(sum==no)
	{
		printf("The Number is Amstrong");
	}
	else
	{
		printf("The number is not Amstrong");
	}
}
