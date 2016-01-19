#include <stdio.h>

int main(){
	printf("%x\n", replace_byte(0x12345678, 2, 0xAB));
	printf("%x\n", replace_byte(0x12345678, 0, 0xAB));
}

unsigned replace_byte(unsigned x, int i, unsigned char b){
	/*
	Removes the byte at the indicated location by using a bitwise shift and masking. 
	*/
	x = x & ~(0xFF << (i << 3));
	
	/*
	Places the character b at the removed byte's location and returns.
	*/
	return x|(b << (i << 3));
}