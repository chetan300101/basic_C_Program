#include<stdio.h>
main()
{
	int choice,a,b,sq,n1,cb;
	
	printf(" 1.Addition\n 2.Even/odd\n 3.Square\n 4.Cube");
	printf("\n  Enter your choice ");
	scanf("%d",&choice);  
	
	switch(choice)
	{
		case 1:printf("Enter numbers ");
		       scanf("%d%d",&a,&b);
		       printf("Addition is = %d",a+b);
		       break;
		case 2:printf("Enter number ");
			   scanf("%d",&a);
			   if(a%2==0)
			   {
			   	printf("The number is even ");
			   }
			   else
			   {
			   	printf("The number is odd");
			   }
			   break;
		case 3:printf("Enter the number");
			   scanf("%d",&a);
			   sq=a*a;
			   printf("Square of a is = %d",sq);
			   break;
		case 4:printf("Enter the number");
		       scanf("%d",&b);
		       cb=b*b*b;
		       printf("Cube of b is = %d",cb);
		       break;
		       
			
	}
} 
