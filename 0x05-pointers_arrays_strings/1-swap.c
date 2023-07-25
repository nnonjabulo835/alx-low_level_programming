#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: the first integer to be swapped
 * @b: the second integer to be swapped
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;

}
