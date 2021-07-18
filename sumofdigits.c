#include<stdio.h>
int sum_of_digits(int n)
{
	if (n==0)
	return 0;
	return (n%10+sum_of_digits(n/10));
}
int main()
{
	int num=1234,result;
	printf("The number entered is %d",num);
	result=sum_of_digits(num);
	printf("sum of digits is %d",result);
	return 0;
}
