#include<stdio.h>
#include<math.h>
void power(int a,int b)
{
	int m;
	m = pow(a,b);
	printf("%lli\n",m);	
}
void add(int a,int b)
{
    int m;
	m = a + b;
	printf("%d\n",m);		
}
void sub(int a,int b)
{
	int m;
	m = a - b;
	printf("%d\n",m);		
}
void mul(int a,int b)
{
	int m,n;
	m = a * b;
	printf("%d",m);		
}
void div(int a,int b)
{
	float m;
	m = a/b;
	printf("%f",m);	
}

void main()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	power(a,b);
	add(a,b);
	sub(a,b);
	mul(a,b);
	div(a,b);
}
