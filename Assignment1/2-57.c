/*
Jared Smith
951452843
CIS 314
Winter 2016
*/


#include <stdio.h>

typedef unsigned char *byte_pointer;

int main(){
	
	show_short(92);
	show_long(1);
	show_double(7.777);
	
}

void show_bytes(byte_pointer start, int length){
	for (int i = 0; i < length; i++){
		printf("%.2x", start[i]);
	}
	printf("\n");
}

void show_short(short x){
	show_bytes((byte_pointer) &x, sizeof(short int));
}

void show_long(long x){
	show_bytes((byte_pointer) &x, sizeof(long int));
}

void show_double(double x){
	show_bytes((byte_pointer) &x, sizeof(double));
}