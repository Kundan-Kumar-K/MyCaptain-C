#include<stdio.h>
#include<stdlib.h>
void prime(int a);
void main()
{
	int p = 0;
	printf("Enter a number : ");
	scanf("%d", &p);
	prime(p);
}
void prime(int a)
{
	
	int i, d;
	d = (a / 2) +1;
	if (a == 2)
	{
		printf("%d is a prime number", a);
		exit(0);
	}
	else
	{
		for (i = 2; i <= d; i++)
		{
			if (a % d == 0)
			{
				printf("%d is not a prime number", a);
				break;
			}
		}
	}
	printf("%d is a prime number", a);
}
