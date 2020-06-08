/* Noel S Cruz	June 7, 2020
   ex_compare_signed_numbers.c  Compare two signed numbers. */

#include <stdio.h>

int main(void){
	signed int x, y, z;

	x = 1;	// 0x00000001
	y = -1;	// 0xFFFFFFFF

	if(x > y)
	  z = 1;
	else
	  z = 0;

	printf("z is: %d\n", z);

	return 0;
}