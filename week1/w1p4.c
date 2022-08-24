#include<stdio.h>

int Lsearch(int value, int arr[100], int size)
{
	int i;
	
	for(i = 0; i < size; i++)
	{
		if (arr[i] == value)
			return i;
	}

	printf("Value doesn't exist");
	return -1;
}


int main()
{
	int arr[100], size, value, i, index;

	//Input
	printf("Enter Size of Array:\n");
	scanf("%d", &size);

	for (i = 0; i < size; i++)
	{
		printf("Enter Element at index %d:\n", i);
		scanf("%d", &arr[i]);
	}

	printf("Enter value to be searched:\n");
	scanf("%d", &value);

	index = Lsearch(value, arr, size);

	printf("Value %d is at index: %d\n", value, index);


}