/*
 * main.c
 *
 *  Created on: Jul 23, 2023
 *      Author: Abdulrahman Shokier
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
	case 1 :
	{
		printf("C Programming");
		break;
	}
	case 2 :
	{
		int n;
		printf("enter an integer ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&n);
		printf("you entered: %d",n);
		break;
	}
	case 3 :
	{
		int n1,n2;
		printf("enter two integers ");
		fflush(stdin); fflush(stdout);
		scanf("%d %d",&n1,&n2);
		printf("sum= %d",n1+n2);
		break;
	}
	case 4 :
	{
		float n1,n2;
		printf("enter two numbers ");
		fflush(stdin); fflush(stdout);
		scanf("%f %f",&n1,&n2);
		printf("product= %f",n1*n2);
		break;
	}
	case 5 :
	{
		char c;
		printf("enter a character: ");
		fflush(stdin); fflush(stdout);
		scanf("%c",&c);
		printf("ASCII value of %c : %d",c,c);
		break;
	}
	case 6 :
	{
		float a,b,temp;
		printf("enter a: ");
		fflush(stdin); fflush(stdout);
		scanf("%f",&a);
		printf("enter b: ");
		fflush(stdin); fflush(stdout);
		scanf("%f",&b);
		temp=a;
		a=b;
		b=temp;
		printf("after swapping a= %f \nafter swapping b= %f",a,b);
		break;
	}
	case 7 :
	{
		float a,b;
		printf("enter a: ");
		fflush(stdin); fflush(stdout);
		scanf("%f",&a);
		printf("enter b: ");
		fflush(stdin); fflush(stdout);
		scanf("%f",&b);
		a=a+b;
		b=a-b;
		a=a-b;
		printf("after swapping a= %f \nafter swapping b= %f",a,b);
		break;
	}
	}
	return 0;
}
