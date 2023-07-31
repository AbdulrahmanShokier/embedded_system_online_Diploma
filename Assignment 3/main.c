/*
 * main.c
 *
 *  Created on: Jul 31, 2023
 *      Author: abdo4
 */
#include<stdio.h>
int main()
{
	int x;
	printf("enter the problem no.");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	switch(x)
	{
	case 1:
	{
		int i,j;
		float a[2][2];
		float b[2][2];
		for (i=0;i<2;i++)
		{
			for (j=0;j<2;j++)
			{
				printf("enter the elements of matrix a \n");
				printf("a%d%d:",i+1,j+1);
				fflush(stdin); fflush(stdout);
				scanf("%f",&a[i][j]);
			}


		}
		for (i=0;i<2;i++)
		{
			for (j=0;j<2;j++)
			{
				printf("enter the elements of matrix b \n");
				printf("b%d%d:",i+1,j+1);
				fflush(stdin); fflush(stdout);
				scanf("%f",&b[i][j]);
			}


		}
		printf("sum of matrix:\n");
		printf("%f\t%f\n%f\t%f",a[0][0]+b[0][0],a[0][1]+b[0][1],a[1][0]+b[1][0],a[1][1]+b[1][1]);
		break;
	}
	case 2:
	{
		int i,n;
		float avg,sum=0;
		printf("enter number of data:\n");
		fflush(stdin); fflush(stdout);
		scanf("%d",&n);
		float arr[n];
		for(i=0;i<n;i++)
		{
			printf("enter number:\n");
			fflush(stdin); fflush(stdout);
			scanf("%f",&arr[i]);
			sum+=arr[i];
		}
		printf("the average=%.3f",avg=sum/(i));
	}
	}
	return 0;
}
