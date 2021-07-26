#include<stdio.h>
int isprime(int, int);

int main()
{
	int num,prime;
	printf("Enter the number to be checked:");
	scanf("%d",&num);
	prime=isprime(num,num/2);
	if(prime==1)
	{
		printf("\n%d is a prime number",num);
	}
	else
	{
		printf("\n%d is not a prime number",num);
	}
	return 0;
}
int isprime(int n, int i)
{
	if(i==1)
	return 1;
	else
	return 0;
}
