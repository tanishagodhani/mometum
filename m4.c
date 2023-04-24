#include<stdio.h>

main()

{
	int t;
	printf("Enter Value =");
	scanf("%d",&t);
	
	(t%2==0) ? printf("%d Number is Even",t) : printf("%d Number is ODD",t);
}

