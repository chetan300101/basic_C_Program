/// 1.	Design a calculator which will correctly solve all the problems except the following ones:   
// 45*3 = 555, 56+9 =77, 56/6= 4.
//Your program should take operator and the two number as input from the user and then return the result.

#include<stdio.h>
     main()
{
	int opr,n1,n2,mul,add,div;
	
	printf("Enter the 1st no, operator and 2nd no =" );
	scanf("%d\n %c\n %d",&n1,&opr,&n2);

	if(opr=='*')	
{
	if(n1==45 && n2==3)
	{ 
		mul=555;
		printf("Multilication is = %d ",mul);
	}
	else
	{
	  mul=n1*n2;
	  printf("Multiplication is = %d ",mul);	
	}
}
	
	if(opr== '+')
	{
		if(n1==56 && n2==9)
	{
		add=77;
		printf("Addition is = %d",add);
	}
	 else
	{
		add=n1+n2;
		printf("Addition is= %d ",add);
	}
	}
	
	if(opr== '/')
	{
		if(n1==56 && n2==6)
	{
		div=4;
		printf("Addition is = %d",div);
	}
	 else
	{
		div=n1/n2;
		printf("Addition is= %d ",div);
	}
	}
}
