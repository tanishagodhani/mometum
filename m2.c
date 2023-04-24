#include<stdio.h>

main()

{
	int character,choice;
	printf("Enter Value of Character=");
	scanf("%d",&character);
	printf("Enter Value of Number=");
	scanf("%d",&choice);
	printf(" M Monday \n");
	printf(" T Tuseday \n");
	printf(" W Wenesday \n");	
	printf(" t Thusrday \n");
	printf(" F Friday \n");
	printf(" S Satuerday \n");
	printf(" s Sunday \n");
	printf(" Chose Eny One Character = \n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Value of Monday =");
			break;
			
		case 2:
			printf("Value of Tuseday =");
			break;
			
		case 3:
			printf("Value of Wenesday =");
			break;
			
		case 4:
			printf("Value of Thusrday =");
			break;
			
		case 5:
			printf("Value of Friday =");
			break;
			
		case 6:
			printf("Value of Satuerday =");
			break;
			
		case 7:
			printf("Value of Sunday=");
			break;
			
		default:
		printf("plz Enter Vaild Number");
	}
}
