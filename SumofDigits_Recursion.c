#include<stdio.h>
int sum(int a);
void main()
{
	int c,s;
	printf("Input number: ");
	scanf("%d", &c);
	s = sum(c);
	printf("Sum of digits: %d", s);
}

int sum(int a)
{
	int h,q,d,su;
	h = a / 10;
	if (h == 0)
	{
		return a%10;
	}
	d = a % 10;
	q = a / 10;
	su = d + sum(q);
}
