#include<stdio.h>

main()

{
	int w,x,y,z;
	printf("Enter Four Number =  \n");
	scanf("%d%d%d%d",&w,&x,&y,&z);
	
	
	
	if(w>x&&w>y&&w>z,w)
	{
		printf("Max is = %d",x);
	}
	else if(x>y&&x>z)
	{
		printf("Max is = %d",x);
	}
	else if(y>z)
	{
		printf("Max is = %d",y);
	}
	else
	{
		printf("Max is = %d",z);
	}
}
