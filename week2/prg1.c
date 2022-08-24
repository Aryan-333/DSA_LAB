#include <stdio.h>
#include<stdlib.h>

void Reverse(int *p,int n)
{
int *b,*l,*mid;
l=p+n;
mid=p+(l-p)/2;
l=l-1;

for(b=p;b<=mid;b++,l--)

{
int t;
t=*b;
*b=*l;
*l=t;
}

}

int main()

{

int *a;

a=calloc(6,sizeof(int));

int n;
printf("Enter the length of the array:\n");
	scanf("%d", &n);

printf("enter the elements into the array\n");

for(int i=0;i<n;i++)

scanf("%d",&a[i]);

Reverse(a,n);

printf("the reversed array is \n");

for(int i=0;i<n;i++)

printf("%d\t",a[i]);

//printf("%d",s);

return 0;

}