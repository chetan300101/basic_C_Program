// e d c b a
// e d c b

#include<stdio.h>
main()
{
	int i,j,no,k;
	
	printf("Enter the number = ");
	scanf("%d",&no);
	
	for(i=no;i>=97;i--)
	{
		for(k=no-i;k>0;k--)
		{
			printf(" ");
		}
		for(j=i;j>=97;j--)
		{
			printf("%c ",j);
		}
		printf("\n");
	}	


}
