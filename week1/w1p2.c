#include<stdio.h>

void Swap(int arr[], int x, int y)
{
int temp = arr[x];
arr[x] = arr[y];
arr[y] = temp;
}

void SelectionSort(int arr[], int n)
{
int pass, j, min_indx;
// One by one move boundary of unsorted subarray
for (pass = 0; pass < n-1; pass++)
{
// Find the minimum element in unsorted array
min_indx = pass;
for (j = pass+1; j < n; j++)
if (arr[j] < arr[min_indx])
min_indx = j;
// Swap the found minimum element with the first element
if (min_indx != pass)
Swap(arr, min_indx, pass);
}
}

int main()
{
int array[10];
int i, j, n, temp;
printf("Enter the value of n \n");
scanf("%d", &n);
printf("Enter the elements \n");
for (i = 0; i < n; i++)
scanf("%d", &array[i]);
/* Selection sorting begins */
SelectionSort(array, n);
printf("The sorted list is (using selection sort): \n");
for (i = 0; i < n; i++)
printf("%d\t", array[i]);
}