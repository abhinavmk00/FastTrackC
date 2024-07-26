#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "day2.h"

int sum_of_digit(int a)
{
	int i,sum=0;
	while(a!=0)
	{
		i=a%10;
		sum=sum+i;
		a=a/10;
	}
	return sum;
}

int reverse_the_number(int a)
{
	int i,rev=0;
	while(a!=0)
	{
		i=a%10;
		rev=(rev*10)+i;
		a=a/10;
	}
	return rev;
}

int occurrences_of_digit(int a,const int b)
{
	int i,ans=0;
	while(a!=0)
	{
		i=a%10;
		if(i==b)
			ans++;
		a=a/10;
	}
	return ans;
}

int palandrome(const int a)
{
	int i,rev=0,j=a;
	while(j!=0)
	{
		i=j%10;
		rev=(rev*10)+i;
		j=j/10;
	}
	if (rev==a)
		return 1;
	else
		return 0;
}

int first_n_primes(int a)
{
	int x=0,flag,i=2;

	while (x<a)
	{
		flag=1;
		for(int j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag=0;
				break;
			}
		}

		if (flag!=0)
		{
			printf("%d ",i);
			x++;
		}
		i++;
	}
	printf("\n");
	return 0;
}

int sum_series(int a)
{
	int sum=0,i=0;
	for(int x=0;x<a;x++)
	{
		i=(i*10)+1;
		sum=sum+i;
	}
	return sum;
}

int armstrong(int a)
{
	int i,x=a,sum=0;
	while(x!=0)
	{
		i=x%10;
		sum=sum+(i*i*i);
		x=x/10;
	}
	
	if(sum==a)
		return 1;
	else
		return 0;
}

int amicable(const int a,const int b)
{
	int suma=0,sumb=0,i=1;
	while (i<a)
	{
		if(a%i==0)
			suma=suma+i;
		i++;
	}
	i=1;
	while (i<b)
	{
		if(b%i==0)
			sumb=sumb+i;
		i++;
	}

	if(suma==b && sumb==a)
		return 1;
	else
		return 0;
}

int sum_diff_pro()
{
	int a,b,choice;
	do
    {
        printf("========= MENU =========\n");
        printf("1. SUM\n");
        printf("2. PRODUCT\n");
        printf("3. DIFFERENCE\n");
        printf("4. EXIT\n");
        printf("========================\n");
        printf("ENTER YOUR OPTION : ");
        scanf("%d",&choice);
        printf("========================\n");
        
        switch(choice)
        {
        case 1 : printf("ENTER TWO NUMBERS :\n");
                 scanf("%d%d",&a,&b);
                 printf("SUM : %d\n",a+b);
                 break;
        case 2 : printf("ENTER TWO NUMBERS :\n");
                 scanf("%d%d",&a,&b);
                 printf("PRODUCT : %d\n",a*b);
                 break;
        case 3 : printf("ENTER TWO NUMBERS :\n");
                 scanf("%d%d",&a,&b);
                 printf("DIFFERENCE : %d\n",a-b);
                 break;
        case 4 : printf("BYE !!!\n");
                 printf("========================\n");
                 break;
        }
    }while(choice!=4);
}

int vol_cube(const int a)
{
    return a*a*a;
}

int vol_cuboid(const int l,const int b, const int h)
{
    return l*b*h;
}

int vol_sphere(const int r)
{
    return (4/3)*3.14*r*r*r;
}

int vol_cylinder(const int r,const int h)
{
    return 3.14*r*r*h;
}

int vol_cone(const int r,const int h)
{
    return (1/3)*3.14*r*r*h;
}

int current_bill(const int unit)
{
    if(units<200)
        return units*5;
    else if(bill<300)
        return ((bill-200)*300)+1000
    
    
}
