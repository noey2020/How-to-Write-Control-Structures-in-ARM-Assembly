/* Noel S Cruz	June 7, 2020
   ex_compare_unsigned_numbers.c  Compare two unsigned numbers. */

#include <stdio.h>

int main(void){
	unsigned int x, y, z;

	x = 0x00000001;
	y = 0xFFFFFFFF;

	if(x > y)
	  z = 1;
	else
	  z = 0;

	printf("z is: %d\n", z);

	return 0;
}