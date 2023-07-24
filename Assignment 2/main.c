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
	case 4:
	{
		float x;
		printf("enter the number");
		fflush(stdin); fflush(stdout);
		scanf("%f",&x);
		if(x==0)
			printf("you entered zero");
		else
			printf("%f is %s",x,(x>0)? "positive":"negative");
		break;
	}
	case 5 :
	{
		char c;
		printf("enter the character");
		fflush(stdin); fflush(stdout);
		scanf("%c",&c);
		if ((c>='a' && c<='z') || (c>='A' && c<='Z'))
			printf("%c is an alphabet",c);
		else
			printf("%c isn't an alphabet",c);
		break;
	}
	case 6:
	{
		int x,i;
		int sum=0;
		printf("enter a +ve integer");
		fflush(stdin); fflush(stdout);
		scanf("%d",&x);
		for (i=x;i>0;i--)
		{
			sum+=i;
		}
		printf("the sum= %d",sum);
		break;
	}
	}
	return 0;
}
