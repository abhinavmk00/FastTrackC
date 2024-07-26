#include <assert.h>
#include <stdio.h>
#include "day2.h"

int main()
{
	int n=5,arm=153,a,b,c,choice;

	printf("Enter value of n:");
	scanf("%d",&n);

	assert(sum_of_digit(111)==3);

	assert(reverse_the_number(12345)==54321);

	assert(occurrences_of_digit(12243,2)==2);

	assert(palandrome(1221)==1);

	printf("First n Primes : ");
	first_n_primes(n);

	assert(sum_series(2)==12);
	printf("Sum of Series : %d\n",sum_series(n));
	
	printf("Armstrong or Not : ");
	scanf("%d",&arm);
	if(armstrong(arm)!=0)
		printf("Armstrong\n");
	else
		printf("Not Armstrong\n");

	assert(amicable(220,284)==1);
	assert(amicable(220,285)==0);

	sum_diff_pro();
	
	do
    {
        printf("=============== MENU ===============\n");
        printf("1. CUBE\n");
        printf("2. CUBOID\n");
        printf("3. SPHERE\n");
        printf("4. CYLINDER\n");
        printf("5. CONE\n");
        printf("6. EXIT\n");
        printf("====================================\n");
        printf("ENTER YOUR OPTION : ");
        scanf("%d",&choice);
        printf("====================================\n");
        
        switch(choice)
        {
        case 1 : printf("ENTER CUBE SIDE (1) :\n");
                 scanf("%d",&a);
                 printf("VOL : %d\n",vol_cube(a));
                 break;
        case 2 : printf("ENTER CUBOID LENGTH BREATH AND HIGHT (3) :\n");
                 scanf("%d%d%d",&a,&b,&c);
                 printf("VOL : %d\n",vol_cuboid(a,b,c));
                 break;
        case 3 : printf("ENTER SPHERE RADIUS (1) :\n");
                 scanf("%d",&a);
                 printf("VOL : %d\n",vol_sphere(a));
                 break;
        case 4 : printf("ENTER CYLINDER RADIUS AND HIGHT (2) :\n");
                 scanf("%d%d",&a,&b);
                 printf("VOL : %d\n",vol_cylinder(a,b));
                 break;
        case 5 : printf("ENTER CONE RADIUS AND HIGHT (2) :\n");
                 scanf("%d%d",&a,&b);
                 printf("VOL : %d\n",vol_cone(a,b));
                 break;
        case 6 : printf("BYE !!!\n");
                 printf("====================================\n");
                 break;
        }
    }while(choice!=6);
    
    

	return 0;
}
