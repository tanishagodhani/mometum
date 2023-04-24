#include<stdio.h>

main()

{
	char ch;
	printf("Enter Value =");
	scanf("%c",&ch);
	
	
	
	if(ch>='a'&&ch<='z')
	{
		printf("%c is Small Alphabet",ch);
	}
	else if(ch>'A' && ch<='Z')
	{
		printf("%c is Capital Alphabet");
	}
	else if(ch>='0'&&ch<='9')
	{
		printf("%c is Digit",ch);
	}
	else
	{
		printf("%c is Special Charecter",ch);
	}
}
