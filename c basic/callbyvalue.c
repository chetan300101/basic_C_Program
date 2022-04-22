// call by value

#include<stdio.h>
void swap(int,int);

main()
{
	
	int n1=20,n2=10;
	printf("Before Swapping");
	printf("\t%d\t%d",n1,n2);
	
	swap(n1,n2);
	
	printf("\nAfter Swapping");
	printf("\t%d\t%d",n1,n2);
}

void swap(int x,int y)
{
	int t;
	t=x;
	x=y;
	y=t;
	
}



