#include<stdio.h>
int getsum(int n);
int main()
{
	int n,sum;
	printf("enter a number:");
	scanf("%d",&n);
	sum=getsum(n);
	printf("\n sum of digit of %d",getsum(n));
	return 0;
} 
int getsum(int n)
{
	int res;
	if(n/10==0)
	return n;
	else
	res= n%10+getsum(n/10);
	return res;
}
