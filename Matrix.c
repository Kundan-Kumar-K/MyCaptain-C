#include<stdio.h>
void main()
{
	int *a[3][3],i,j;
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			printf("element - [%d],[%d] : ",i,j);
			scanf_s("%d", &a[i][j]);
		}
	}
	printf("The matrix is : \n");
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
