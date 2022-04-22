// to print the enter character is vowel or consonants in given string

#include<stdio.h>
main()
{
	char v[15]={'a','e','i','o','u','A','E','I','O','U'};
	char x[10];
	int i,j,f=0;
	
	printf("Enter the char = ");
	
	for(i=0;i<strlen(x);i++)
	{
		scanf("%s",x);
	}
	for(i=0;i<strlen(x);i++)
	{
		printf("Entered char is = %s\n",x);
	}
	for(i=0;i<strlen(x);i++)
	
	
	{
		for(j=0;j<strlen(v);j++)
		{
			if(x[i]==v[j])
			{
				f++;
			}
		}
		
	}
	if(f!=0)
	{
		printf("Entered char %s is Vowel",x);
	}
	
	else
	{
		printf("Entered char %s is Consonant",x);
		
	}
}

