/*
 * main.c
 *
 *  Created on: Jul 31, 2023
 *      Author: abdo4
 */
#include<stdio.h>
#include<string.h>
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
			printf("%d. enter number:\n",i+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&arr[i]);
			sum+=arr[i];
		}
		printf("the average=%.3f",avg=sum/(i));
		break;
	}
	case 3:
	{
		int r,c;
		int i,j;
		printf("enter the rows and columns:\n");
		fflush(stdin); fflush(stdout);
		scanf("%d%d",&r,&c);
		int arr[r][c];
		printf("enter the elements of the matrix:\n");
		for (i=0;i<r;i++)
		{
			for (j=0;j<c;j++)
			{
				printf("enter n%d%d",i+1,j+1);
				fflush(stdin); fflush(stdout);
				scanf("%d",&arr[i][j]);
			}
		}
		printf("\nentered matrix\n");
		for (i=0;i<r;i++)
		{
			for (j=0;j<c;j++)
			{
				printf("%d",arr[i][j]);
			}
			printf("\n");
		}
		printf("transposed matrix\n");
		for (i=0;i<r;i++)
		{
			for (j=0;j<c;j++)
			{
				printf("%d",arr[j][i]);
			}
			printf("\n");
		}
		break;
	}
	case 4:
	{
		int n,x,l,i;
		printf("enter number of elements:\n");
		fflush(stdin); fflush(stdout);
		scanf("%d",&n);
		int arr[n];
		for(i=0;i<n;i++)
		{
			printf("%d. enter number:\n",i+1);
			fflush(stdin); fflush(stdout);
			scanf("%d",&arr[i]);
		}
		printf("enter element to be inserted:\n");
		fflush(stdin); fflush(stdout);
		scanf("%d",&x);
		printf("enter its location:\n");
		fflush(stdin); fflush(stdout);
		scanf("%d",&l);
		arr[l-1]=x;
		printf("array= ");
		for(i=0;i<n;i++)
		{
			printf("%d  ",arr[i]);
		}
		break;
	}
	case 5:
	{
		int n,i,m;
		printf("enter number of elements");
		fflush(stdin);fflush(stdout);
		scanf("%d",&n);
		int arr[n];
		for (i=0;i<n;i++)
		{
			printf("%d. enter the number: ",i+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&arr[i]);
		}
		printf("enter the number to be searched: ");
		fflush(stdin);fflush(stdout);
		scanf("%d",&m);
		for (i=0;i<n;i++)
		{
			if(m==arr[i])
			{
				printf("number found at location: %d",i+1);
				break;
			}
		}
		break;
	}
	case 6:
	{
		int i,n=0,l;
		char s;
		char text[100];
		printf("enter the string:\n");
		fflush(stdin);fflush(stdout);
		gets(text);
		printf("enter the character:");
		fflush(stdin);fflush(stdout);
		scanf("%c",&s);
		l=strlen(text);
		for (i=0;i<l;i++)
		{
			if (text[i]==s)
				++n;
		}
		printf("frequency of %c is: %d",s,n);
		break;
	}
	case 7:
	{
		int i,n=0;
		char name[100];
		printf("enter name: ");
		fflush(stdin);fflush(stdout);
		gets(name);
		for(i=0;i<100;i++)
		{
			if (name[i]=='\0')
				break;
			++n;
		}
		printf("the string length is : %d",n);
		break;
	}
	case 8:
	{
		int i,l;
		char name[100];
		printf("enter name: ");
		fflush(stdin);fflush(stdout);
		gets(name);
		l=strlen(name);
		printf("            ");
		for(i=l-1;i>=0;i--)
		{
			printf("%c",name[i]);
		}
		break;
	}
	}
	return 0;
}
