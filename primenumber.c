#include<stdio.h>
int prime(int,int);
int prime(int num,int i)
{
	if(i==1)
	{
		return 1;
	}
	else
	{
		if(num%i==0)
			{
				return 0;
			}
			else
			{
				return prime(num,i-1);
			}
		
	}
}
int main()
{
	int num,check;
	printf("enter a mumber=");
	scanf("%d",&num);
	check = prime(num,num/2);
	if( check==1)
	{
		printf("\n %d is a prime number",num);
	}
	else
	{
		printf("\n %d is not a prime number",num);
	}
	return 0;
}
