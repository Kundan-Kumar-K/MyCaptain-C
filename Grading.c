#include<stdio.h>
main()
{
	int m;
	char X;
	printf("Enter your Marks : ");
	scanf_s("%d", &m);
	X = m >= 85 ? 'A' : (m >= 70 && m < 85 ? 'B' : (m >= 55 && m < 70 ? 'C' : (m >= 40 && m < 55 ? 'D' : 'F')));
	printf("Your Grade is %c", X);
}
