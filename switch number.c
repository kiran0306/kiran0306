
#include<stdio.h>
int main()
{
	int n;
	printf("enter a number 1 or 0:\t");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("you have enterd 1");
			break;
		case 2:
			printf("you have enterd 0");
			break;
		defult:printf("invalid number");
	}
	return (0);
}
