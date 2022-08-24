#include<stdio.h>

int main()
{
	int arr1[100][100], arr2[100][100], arr3[100][100];
	int sum;
	int r1, c1, r2, c2, i, j, k;

	// Input
	printf("Enter dimensions of 1st matrix:\n");
	scanf("%d%d", &r1, &c1);

	printf("Enter values of 1st matrix\n");
	for (i = 0; i < r1; i++)
	{	
		for (j =0; j < c1; j++)
		{
			printf("Index %d, %d:\n", i, j);
			scanf("%d", &arr1[i][j]);
		}
	}


	printf("Enter dimensions of 2nd matrix:\n");
	scanf("%d%d", &r2, &c2);

	printf("Enter values of 2nd matrix\n");
	for (i = 0; i < r2; i++)
	{	
		for (j =0; j < c2; j++)
		{
			printf("Index %d, %d:\n", i, j);
			scanf("%d", &arr2[i][j]);
		}
	}

	// Multiplication
	if(c1 != r2)
	{
		printf("Cannot multiply matrices");
		return 0;
	}

	for(i = 0; i < r1; i++)
	{
		
		for(j = 0; j < c2; j++)
		{
			sum = 0;
			
			for (k = 0; k < c1; k++)
			{
				
				sum += arr1[i][k] * arr2[k][j];
			}

			arr3[i][j] = sum;

		}

	}

	// Print Result
	printf("Resultant matrix\n");
	for (i = 0; i < r1; i++)
	{	
		for (j =0; j < c2; j++)
		{
			printf("%d  ", arr3[i][j]);
		}
		printf("\n");
	}
	return 0;
}