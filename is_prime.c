#include <stdio.h>

int is_prime(int num)
{
	int i = 2;
	if (num < 2)
		return 0;
	while (i * i <= num)
	{
		if (num % i == 0)
			return 0;
		i++;
	}
	return 1;
}

int main(void)
{
	printf("%d", is_prime(15));
	return 0;
}