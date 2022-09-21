#include<stdio.h>
int main()
{
	int sub(int,int);
	int x,n;
	printf("enter values");
	scanf("%d%d",&x,&n);
	printf("siub = %d",add(x,n));
	return 0;
}
int add(int x, int n)
{
	return(x-n);
}
