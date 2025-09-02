#include "ft_abs.h"
int ft_putstr(char *str)
{
	int nbr = 0;
	while(*str)
	{
		nbr = nbr * 10 + *str + '0';
		str++;
	}
	return nbr;
}
// void ft_putstr(char *str)
// {
// 	while (*str)
// 		write(1, str++, 1);
// }

int main (void)
{
	int i = 24;
	printf("%d", ABS(i));
	return 0;
}