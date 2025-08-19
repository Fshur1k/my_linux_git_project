#include <stdio.h>
#include <stdlib.h>

int deep_left(int *arr)
{
	int counter = 0;
	int max_deep = 0;
	for (int i=0;i<4;i++)
	{
		if (arr[i] > max_deep)
		{
			max_deep = arr[i];
			counter++;
		}
	}
	return counter;
}

void swap(int *x, int *y)
{
	int t;
	t = *x;
	*x = *y;
	*y = t;
}
//string,first index l, last index
void permute(int *a, int l, int r)
{
	int i;
	if (l==r)
	{
		for(int j=0;j<4;j++)
		{
			printf("%d",a[j]);
		}
		printf(":%d\n", deep_left(a));
	}
	else{
		for (i=l;i<=r;i++)
		{
			swap((a+l),(a+i));
			permute(a,l+1,r);

			//backtrack
			swap((a+l),(a+i));
		}
	}
}


int main(void)
{
	int arr[] = {1,2,3,4};
	int len = 4;
	permute(arr,0,len-1);

    return 0;
}