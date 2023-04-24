#include<stdio.h>

main()

{
	int unit;
	float a,t,surch;
	printf("Enter  Total Units Value =");
	scanf("%d",&unit);
	
	
	
	if(unit<=50)
	{
		a=unit*0.50;
	}
	else if(unit<=150)
	{
		a=unit*25+(unit-50)*0.75;
	}
	else if(unit<=250)
	{
		a=100+(unit-250)*1.20;
	}
	else
	{
		a=220+(unit-250)*1.50;
	}
	surch=a*0.20;
	t=a+surch;
	
	printf("YOUR ELECTRICITY BILL=%20f",t);
}
