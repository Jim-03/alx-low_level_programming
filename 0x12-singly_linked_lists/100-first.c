#include <stdio.h>

void premain(void) __attribute__((constructor));
/**
 * premain - prints before main runs
 */

void premain(void) __attribute__((constructor))
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
