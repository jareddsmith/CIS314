/*
A:
The condition will always succeed because both value
used are different types. sizeof(val) is unsigned and
because maxbytes is an int, it is signed.When the operation,
occurs maxbytes is made into an unsigned value.
The result of this is that the operation will always yeild positive.

B:
To circumvent the problem in the source given, casting the sizeof(val)
as an int will correct the operation because both are signed.
*/

#include <stdio.h>

void copy_int(int val, void *buf, int maxbytes) {
	if (maxbytes- ((int)sizeof(val)) >= 0)
		memcpy(buf, (void *) &val, sizeof(val));
}
