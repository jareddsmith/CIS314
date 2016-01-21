/*
Jared Smith
CIS 314
Winter 2016
*/

#include <stdio.h>

/* Declaration of data type where 4 bytes are packed
 into an unsigned */
typedef unsigned packed_t;
/* Extract byte from word. Return as signed integer */

/*
int xbyte(packed_t word, int bytenum){
	return (word >> (bytenum << 3)) & 0xFF;
};

A:
The above code returns an unsigned byte because the word is unsigned. Without declaring the byte as signed,
the mask would always return a positive because zero would be in the most significant digit place.

B:
The correct implementation of the code below uses subtraction and shifting to retrieve the signed byte.
The subraction ensures that no bytes are lost through shifting by providing the bound as the most significant byte.
Declacing the signed byte as an int, the signed value, eliminated by the mask, is preserved.
Shifting the byte back will return the signed integer value of that byte.
*/
int xbyte(packed_t word, int bytenum){
	int signed_byte = (word << ((3 - bytenum) << 3)
	signed_byte = signed_byte >> 24)
	return signed_byte;
}

int main(){
	packed_t p = 0x89ABCDEF;
	printf("%d\n", xbyte(p, 2));
	printf("%d\n", xbyte(p, 3));
}
