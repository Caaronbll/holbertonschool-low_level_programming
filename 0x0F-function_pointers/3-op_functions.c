#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds a and b
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	int addition = a + b;

	return (addition);
}

/**
 * op_sub - subtracts a from b
 * @a: first integer
 * @b: second integer
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	int subtraction = a - b;

	return (subtraction);
}

/**
 * op_mul - multiplies a and b
 * @a: first integer
 * @b: second integer
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	int multiply = a * b;

	return (multiply);
}

/**
 * op_div - divides a and b
 * @a: first integer
 * @b: second integer
 * Return: factor of a and b
 */

int op_div(int a, int b)
{
	int divide = a / b;

	return (divide);
}

/**
 * op_mod - remainder a and b
 * @a: first integer
 * @b: second integer
 * Return: remainder of a and b
 */

int op_mod(int a, int b)
{
	int remainder = a % b;

	return (remainder);
}


