#include<stdio.h>
int lcm(int a, int b);
int gcd(int a, int b);
int main()
{
	int c, d,l;
	printf("Input first number: ");
	scanf("%d", &c);
	printf("Input second number: ");
	scanf("%d", &d);
	l = lcm(c, d);
	printf("LCM of %d and %d = %d", c, d, l);
}

int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

int lcm(int a, int b)
{
	return (a * b) / gcd(a, b);
}
