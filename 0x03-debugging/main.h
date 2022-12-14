#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
int positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is a negative number", i);
	else if (i > 0)
		printf("%d is a postive number", i);
	else
		printf("%d is 0", i);
}
#endif /* MAIN_H */
