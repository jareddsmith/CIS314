#include <stdio.h>

/* Return 1 when any odd bit of x equals 1; 0 otherwise.
 Assume w=32. */
int any_odd_one(unsigned x){
	/* Simply uses a mask to determine the odd bits */
	return (x & 0xAAAAAAAA) != 0;
}