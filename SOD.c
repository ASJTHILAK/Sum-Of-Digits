#include<stdio.h>
int sum(int n);
int main()
{
	int num,result;
	printf("INPUT \nInput number:");
	scanf("%d",&num);
	result=sum(num);
	printf("OUTPUT \nSum of digits:%d",result);
	return 0;
}
int sum(int n)
{
	if(n==0)
	{
		return 0;
	}
	else 
	{
		return (n%10 + sum(n/10));
	}
}
