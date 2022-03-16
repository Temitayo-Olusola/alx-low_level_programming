#include "main.h"

/**
 * add - adds two integers and returns the result
 * @a: int to be added to b
 * @b: int to be added to a
 * Return: sum of a and b
 */
int add(int a, int b)
{
	int a = printf("Enter the value of a: ");
	scanf("%d", &a);
	int b = printf("Enter the value of b: ");
	scanf("%d", &b);

	int c;

	c = a + b;

	return (c);
}
