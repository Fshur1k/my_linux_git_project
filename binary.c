#include <stdio.h>

void print_numb(int num)
{
	for(int i=7;i>=0;i--)
	{
		int bit = (num >> i) & 1;
		printf("%d", bit);
	}
	printf("\n");
}

0111 & 	0100

int main(void)
{
	int a = 4;
	int b = ~4;
	print_numb(a);
	printf("%d\n", a);
	print_numb(b);
	printf("%d\n",b);
	return 0;
}