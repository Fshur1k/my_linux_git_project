#include <stdio.h>

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void permute(int *arr, int l, int r)
{
	if (l == r)
	{
		for (int i=0;i<5;i++)
			printf("%d",arr[i]);
		printf("\n");
	}
	else
	{
		for (int i=l;i<=r;i++)
		{
			swap(&arr[l],&arr[i]);
			permute(arr ,l+1,r);
			swap(&arr[l],&arr[i]);
		}
	}
}

int main(void)
{
	int arr[] = {1,2,3,4,5};
	int b = 5;
	permute(arr, 0, b-1);
	return 0;
}
