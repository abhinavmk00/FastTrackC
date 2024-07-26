#include <stdio.h>
#include "day3.h"
#define CAT(a,b) printf("%d%d\n",a,b)
#define SQR(a) printf("%d\n",a*a)

int main()
{
	int choice,num,num1;

	printf("========================================================\n");

	printf("1. Decimal to Binary\n");
	printf("2. Binary to Decimal\n");
	printf("Your option :");
	scanf("%d",&choice);

	printf("Enter Number :");
	scanf("%d",&num);

	switch(choice)
	{
		case 1: printf("Binary : %d\n",dec_bin(num));
				break;
		case 2: printf("Decimal : %d\n",bin_dec(num));
				break;
		default: printf("invalid option!!\n");
				break;
	}

	printf("========================================================\n");

	printf("Enter a number (series): ");
	scanf("%d",&num);
	sum_seq(num);

	printf("========================================================\n");

	printf("Enter a number (pattern 1): ");
	scanf("%d",&num);
	star_1(num);

	printf("========================================================\n");

	printf("Enter a number (pattern 2): ");
	scanf("%d",&num);
	star_2(num);	

	printf("========================================================\n");

	sum_nine();	

	printf("========================================================\n");

	printf("Enter Base and Exponent : \n");
	scanf("%d%d",&num,&num1);
	printf("Result : %d\n",power(num,num1));	

	printf("========================================================\n");
	
	printf("Enter a number (factorial): ");
	scanf("%d",&num);
	printf("Result : %d\n",fact(num));	

	printf("========================================================\n");
	
	printf("Enter two numbers to concatenate : \n");
	scanf("%d%d",&num,&num1);
	printf("Result : ");
	CAT(num,num1);	

	printf("========================================================\n");
	
	printf("Enter two numbers to concatenate : \n");
	scanf("%d",&num);
	printf("Result : ");
	SQR(num);	

	printf("========================================================\n");
	return 0;
}
