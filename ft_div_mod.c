#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int a = 12;
	int b = 5;
	int *div;
	int *mod;
	ft_div_mod(a,b,div,mod);
	return 0;
}


void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
	printf("%d/t%d",*div,*mod);
}
