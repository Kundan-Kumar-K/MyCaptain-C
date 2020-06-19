#include<stdio.h>
#include<stdlib.h>
void prime(int a);
int i = 2;
void main()
{
	int p = 0;
	printf("Enter a number : ");
	scanf("%d", &p);
	if (p == 2)
	{
		printf("%d is a prime number", p);
		exit(0);
	}
	prime(p);
}
void prime(int a)
{
	int d;
	d = (a / 2) +1;
	if (i <= d)
	{
		if (a % i == 0)
		{
			printf("%d is not a prime number", a);
			exit(0);
		}
		i++;
		prime(a);
	}
	else
		printf("%d is a prime number", a);
}
