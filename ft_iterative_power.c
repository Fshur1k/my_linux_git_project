#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else
		ft_iterative_power(nb * nb, power-1);
	return nb;
}

int	main(void)
{
	printf("%d",ft_iterative_power(4,4));
	return 0;
}