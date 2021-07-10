#include<stdio.h>
int main()
{
	int marks;
	printf("Enter your marks: ");
	scanf("%d",&marks);
	if(marks<=100 && marks>=85)
	{
		printf("You got Grade A");
	}
	else if(marks<=84 && marks>=70)
	{
		printf("You got Grade B");
	}
	else if(marks<=69 && marks>=55)
	{
		printf("You got Grade C");
	}
	else if(marks<=54 && marks>=40)
	{
		printf("You got Grade D");
	}
	else
	{
		printf("You got Grade F");
	}
  return 0;
}
