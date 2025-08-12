#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int j = 31;
	int k = 8;
	int *a = &j;
	int *b = &k;
	printf("%d\t%d\n", j, k);
	ft_ultimate_div_mod(a, b);
	printf("%d\t %d\n", *a, *b);
	return 0;
}


void ft_ultimate_div_mod(int *a, int *b)
{
	int div = *a / *b;
	int mod = *a % *b;
	*a = div;
	*b = *b;
}
