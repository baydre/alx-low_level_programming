#include <stdio.h>

void baydre(void) __attribute__((constructor));

/**
 * baydre - prints before the main
 * function is executed
 */
void baydre(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
