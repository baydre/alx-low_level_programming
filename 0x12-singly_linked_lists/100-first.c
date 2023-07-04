/*
 * singly-linked_list, Task 5: function that prints before the main
 * function is executed.
 */
#include "lists.h"

void exe_b4_main(void) __attribute__((constructor));

/**
 * baydre - prints before the main
 * 	function is executed
 */
void exe_b4_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
