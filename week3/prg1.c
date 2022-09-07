#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct 
{
int real;
int img;
}Complex;

Complex addComp(Complex a, Complex b);
Complex subtractComp(Complex a, Complex b);
Complex multComp(Complex a, Complex b);

void main()
{

Complex a,b,sum,subtract,prod;
printf("Enter the Real Part of the First Complex Number : \n");
scanf("%d",&a.real);
printf("Enter the Imaginary Part of the First Complex Number : \n");
scanf("%d",&a.img);
printf("Enter the Real Part of the Second Complex Number : \n");
scanf("%d",&b.real);
printf("Enter the Imaginary Part of the Second Complex Number : \n");
scanf("%d",&b.img);

sum = addComp(a,b);
subtract = subtractComp(a,b);
prod = multComp(a,b);

printf("The Sum of the Complex Numbers is : %d + %di\n",sum.real,sum.img);
printf("The Subtraction of the Complex Numbers is : %d + %di\n",subtract.real,subtract.img);
printf("The Product of the Complex Numbers is : %d + %di\n",prod.real,prod.img);
}


Complex addComp(Complex a, Complex b)
{
Complex sum;
sum.real = a.real + b.real;
sum.img = a.img + b.img;
return sum;
}

Complex subtractComp(Complex a, Complex b)
{
Complex subtract;
subtract.real = a.real - b.real;
subtract.img = a.img - b.img;
return subtract;
}

Complex multComp(Complex a, Complex b)
{
Complex prod;
prod.real = (a.real * b.real) - (a.img * b.img);
prod.img = (a.img * b.real) + (a.real * b.img);
return prod;
}