/* Noel S Cruz	June 4, 2020
   error.c  Demonstrates how compilers do implicit casting of signed to
   unsigned leading to error. two's complement. */

#include <stdio.h>

int main(void){
	unsigned int x = 1;
	int y = -1;

	//if(x > y)	// explicitly cast unsigned x to signed => if((int) x > y)
	if((int) x > y)	// now, comparison is signed with signed numbers
	  printf("Yes, x>y is true, of course!\n");
	else
	  printf("It can't be 1>-1, error!\n");

	return 0;
}