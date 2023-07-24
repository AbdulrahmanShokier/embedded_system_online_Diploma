/*
 * main.c
 *
 *  Created on: Jul 24, 2023
 *      Author: abdo4
 */
#include<stdio.h>

int main()
{
	int x;
	printf("enter the problem number");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	switch(x)
	{
	case 1:
	{
		int n=0;
		printf("enter the integer you want to check");
		fflush(stdin); fflush(stdout);
		scanf("%d",&n);
		if (n%2==0)
			printf("%d is even ",n);
		else
			printf("%d is odd ",n);
		break;
	}
	}
	return 0;
}
