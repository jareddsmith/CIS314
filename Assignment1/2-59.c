#include <stdio.h>

int main(){
	byte_word(0x89ABCDEF,0x76543210);
}

void byte_word(int x, int y){
	/*
	Unsets the last byte of y and all but the last byte of x.
	Combines the two with the or operation.
	*/
	printf((x & 0xff) | (y & ~0xff),"\n");
}