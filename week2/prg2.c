#include <stdio.h>
#include<stdlib.h>

int * Smallest(int *p,int n)

{
int *b,*l,*mid;
l=p+n-1;
int *s=p;
for(b=p;b<=l;b++)
{
if(*s>*b)
s=b;
}
return s;
}
int main()
{
int *a;



int n;
printf("Enter the length of the array:\n");
	scanf("%d", &n);
a=calloc(n,sizeof(int));
printf("enter the elements into the array\n");

for(int i=0;i<n;i++)

scanf("%d",&a[i]);

int *ss=Smallest(a,n);

printf("%d is smallest",*ss);

return 0;

}