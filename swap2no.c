#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter the value of a\n");
  scanf("%d",&a);
  printf("Enter the value of b\n");
  scanf("%d",&b);
  /*how to swap two numbers*/
  a=a+b;
  b=a-b;
  a=a-b;
  /*printing two numbers after swapping*/
  printf("The values after swapping the numbers is %d and %d",a,b);
  return 0;
}
