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
	case 2 :
	{
		char c;
		printf("enter the character");
		fflush(stdin); fflush(stdout);
		scanf("%c",&c);
		if (c =='a'||c =='A'||c =='e'||c =='E'||c =='u'||c =='U'||c =='o'||c =='O'||c =='i'||c =='I')
			printf("%c is vowel",c);
		else
			printf("%c is consonant",c);
		break;
	}
	case 3 :
	{
		float n1,n2,n3;
		printf("enter three numbers \n");
		fflush(stdin); fflush(stdout);
		scanf("%f %f %f",&n1,&n2,&n3);
		if     (n1>n2 && n1>n3)
			printf("%f is the largest",n1);
		else if(n1>n2 && n1<n3)
			printf("%f is the largest",n3);
		else if(n1<n2 && n2>n3)
			printf("%f is the largest",n2);
		else if(n1<n2 && n2<n3)
			printf("%f is the largest",n3);
		break;
	}
	}
	return 0;
}
