#include <assert.h>
#include <stdio.h>
#include "day1_operation.c"


int main()
{
	assert(area_circle(3) == 28);
	assert(area_circle(-1) == FAILURE);


	assert(distance_between_char('a','c') == 1);
	assert(distance_between_char('a','e') == 3);

	assert(upper_to_lower('X') == 'x');
	assert(upper_to_lower('J') == 'j');
	assert(upper_to_lower('*') == FAILURE);

	assert(cel_far(65 == 149));
	assert(cel_far(0 == 32));

	assert(odd_or_even(2)==1);
	assert(odd_or_even(85)==0);
	assert(odd_or_even(23)==0);
	assert(odd_or_even(200)==1);

	assert(leap_or_not(2004)==1);
	assert(leap_or_not(2000)==1);
	assert(leap_or_not(2005)==0);

	assert(power_of_two(2)==4);
	assert(power_of_two(-2)==FAILURE);

	assert(int_or_char(9)==1);
	assert(int_or_char('d')==0);
	assert(int_or_char('*')==0);

	printf("random sum = %d\n",rand_sum());
	//printf("%d", power_of_two(0));

	return 0;
}