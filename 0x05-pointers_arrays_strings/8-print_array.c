#include "main.h"

/**
 * print_array - function name
 * @a: function parameter 1
 * @n: function parameter 2
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
		printf("\n");
}
