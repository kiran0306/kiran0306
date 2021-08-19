#include<stdio.h>
int LCM(int,int);
int main()
{
	int a,b,result;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	result=LCM(a,b);
	printf("\nthe LCM of %d is %d",a,b,result);
}
int LCM(int a,int b)
{
	static int com=1;
	if(com%a==0&&com%b==0)
	return com;   
	com++;
	LCM(a,b);
	return com;
}
