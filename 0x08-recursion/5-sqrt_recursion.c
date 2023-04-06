#include "main.h"

int find_root(int k, int j);
int _sqrt_recursion(int n);

/**
 *_sqrt_recursion - fun return sqrt
 *@n: the n who want to calc root for it
 *Return: integer
 */

int _sqrt_recursion(int n)
{
	int m = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_root(n, m));
}

/**
 *find_root  - fun return sqrt
 *@k: the n who want to calc root for it
 *@j: root
 *Return: intege
 */
int find_root(int k, int j)
{
	if (k / 2 == j)
		return (-1);
	if ((j * j) == k)
	{
		return (j);
	}
	return (find_root(k, j + 1));

}
