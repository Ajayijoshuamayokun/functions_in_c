#include <stdio.h>

int power(int m, int n);

/* test power function */
int main()
{
	int i;

	for (i = 0; i < 12; ++i)
		printf("%d %d\n", i, power(2,i));
	return 0;
}

/* power: raise base to n-th power; n >= 0 */
int power(int base, int n)
{
	int i, p;

	p = 1;
	for (i =1; i <= n; ++i)
		p = p * base;
	return p;
}

