#include <stdio.h>
#include<stdlib.h>

int m,n,p,q;

void Multi2mat(int **a,int **b,int **c)
{
int i,j,k;
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
*(*(c+i)+j)=0;
for(k=0;k<n;k++)
*(*(c+i)+j)=*(*(c+i)+j)+(*(*(a+i)+k)) * (*(*(b+k)+j));
}
}
}

int main()
{


int i,j,k;

printf("enter the dimension of matrix a");

scanf("%d%d",&m,&n);

printf("enter the dimension of matrix a");

scanf("%d%d",&p,&q);

if(n!=p)

{

printf("mul not possible\n");

exit(0);

}

int *a[m],*b[p],*c[m];

for(i=0;i<m;i++){

a[i]=calloc(n,sizeof(int));

c[i]=calloc(q,sizeof(int));

}

for(i=0;i<p;i++)

b[i]=calloc(q,sizeof(int));

printf("enter the elements into the 'a' array\n");

for(i=0;i<m;i++)

{

for(j=0;j<n;j++)

scanf("%d",(*(a+i)+j));

}

printf("the elements of a matrix are \n");

for(i=0;i<m;i++)

{

for(j=0;j<n;j++)

printf("%d\t",*(*(a+i)+j));

printf("\n");

}

printf("enter the elements into the 'b' array\n");

for(i=0;i<p;i++)

{

for(j=0;j<q;j++)

scanf("%d",(*(b+i)+j));

}

printf("the elements of a matrix are \n");

for(i=0;i<p;i++)

{

for(j=0;j<q;j++)

printf("%d\t",*(*(b+i)+j));

printf("\n");

}

Multi2mat(a,b,c);

printf("the elements of c matrix are \n");

for(i=0;i<m;i++)

{

for(j=0;j<q;j++)

printf("%d\t",*(*(c+i)+j));

printf("\n");

}

return 0;

}

