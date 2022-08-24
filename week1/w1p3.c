#include<stdio.h>

double Add(double arr[200], int n)
{
	int i;
	double sum = 0;

	//Adding
	for (i = 0; i < n; i++)
		sum += arr[i];

	return sum;
}


int main()
{
	double arr[200];
	int size, i;
	double sum;

	//Input
	printf("ENter Size of Array:\n");
	scanf("%d", &size);

	for (i = 0; i < size; i++)
	{
		printf("Enter Element at index %d:\n", i);
		scanf("%lf", &arr[i]);
	}

	sum = Add(arr, size);
	printf("Sum of the array is %lf\n", sum);
	


	return 0;
}