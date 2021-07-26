#include<stdio.h>
int main()
{
	int arr[3][3],i,j,sum;
	int *ptr;
	ptr=&arr[0][0];
  //input array elements
	printf("The elements are:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
  //access array elements
	printf("\nThe matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",*((ptr+i*3)+j));
			
		}
		printf("\n");
	}
	//to find and print sum of all diagonal elements
	printf("\nThe diagonal elements are:%d,%d,%d",arr[0][0],arr[1][1],arr[2][2]);
	sum=arr[0][0]+arr[1][1]+arr[2][2];
	printf("\n The sum of diagonal elements is %d",sum);
	return 0;
}
