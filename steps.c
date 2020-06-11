void main()
{
	int n,i,j;
	printf("Enter the number of steps required : ");
	scanf("%d", &n);
	for (i = 0; i <= n; i++)
	{
		printf("\n");
		for (j = 0; j < i; j++)
		{
			printf("01");
		}
	}
}
