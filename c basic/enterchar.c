//To print enter number is character, number or special character

#include<stdio.h>
  main()
{
	int ch,i;
	
	printf("Enter any number = ");
	scanf(" %d",&ch);
	if(ch>=65 && ch<=90)
	{
		printf("Entered char is Uppercase Alaphabet %c ",ch);
	}	

	else if(ch>=97 && ch<=122)
	{
		printf("Entered char is Lowercase Alphabet %c ",ch);
	}
	
	else if(ch>=48 && ch<=57)
	{
		printf("Entered char is Number %c",ch);
	}

	else if(ch>=33 && ch<=47 || ch>=58 && ch<=64 || ch>=91 && ch<=96 || ch>=123 && ch<=126)
	{
		printf("Entered char is Special Character %c",ch);
	}

	else
	{
		printf("You entered wrong number...!");
	}
}

