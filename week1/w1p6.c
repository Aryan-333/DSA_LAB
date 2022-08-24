#include<stdio.h>

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int arr[200], n, i, large1, large2, temp;

	//Input
	printf("Enter Size of Array:\n");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("Enter Element at index %d:\n", i);
		scanf("%d", &arr[i]);
	}

	large1 = arr[0]; large2 = arr[1];
	if (large2 > large1)
		swap(&large2, &large1);


	for (i = 2; i < n; i++)
	{
		if (arr[i] > large1)
		{
			large2 = large1;
			large1 = arr[i];
		}
	}
	printf("Second Largest Element is %d", large2);
	return 0;
}