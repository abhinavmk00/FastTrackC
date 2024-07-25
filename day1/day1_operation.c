#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "day1.h"

char upper_to_lower(const char a)
{
	int x=a+32;

	if(a<65||a>90)
		return FAILURE;


	return x;
}

int area_circle(const int r)
{
	if (r<0)
		return FAILURE;
	return 3.14*r*r;
}

int distance_between_char(const char a,const char b)
{
	int x=a,y=b;
	return abs(x-y)-1;
}

int cel_far(const int c)
{
	return (c*(9/5))+32;
}

int odd_or_even(const int a)
{
	if (a%2==0)
		return 1;//1 is even
	else 
		return 0;//0 is odd
}

int leap_or_not (const int a)
{
	if (a%4==0)
		return 1;//1 is leap
	else
		return 0;//0 is not leap
}

int power_of_two(const int a)
{
	if(a<0)
		return FAILURE;
	return(1 << a);
}

int int_or_char(const char a)
{
	if(a<10)
		return 1;//1 is int
	else
		return 0;//0 is char
}

int rand_sum()
{
	int a=rand(),b=rand();
	return a+b;
}