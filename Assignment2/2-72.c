/*
A:
The condition will always succeed because both values
used are different types. sizeof(val) is unsigned and
because maxbytes is an int, it is signed.When the operation,
occurs maxbytes is made into an unsigned value.
The result of this is that the operation will always yeild positive.

B:
To circumvent the problem in the source given, casting the sizeof(val)
as an int will correct the operation because both are signed.
*/

#include <stdio.h>

void copy_int(int val, void * buf, int maxbytes) {
	if (maxbytes- ((int)sizeof(val)) >= 0)
		memcpy(buf, (void *) &val, sizeof(val));
}

int main(){
	/*
	Code given by Eric:
	https://piazza.com/class/iip06zlhul34ql?cid=41
	
	Note: I have not been able to attend the lab that covered this material
		  as mentioned in the link. My lab was Monday but due to MLK Day,
		  there was no class. I have not been to get another lab yet but I will asap.
		  Prior to turning this in, I made the test case based contextual logic and
		  thus might not print properly.
	*/
	int test_int = 0x0000012A;
	void * p = malloc(sizeof(test_int));
	copy_int(test_int , p, sizeof(test_int))
	int * vp = (int *) p;
	printf("%d\n", *vp);
}