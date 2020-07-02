#include<stdio.h>
#define MAXSIZE 20

struct emp
{
	int empno;
	char empname[10];
	char deptname[10];
	int salary;
};

typedef struct emp EMP;

int main()
{
	int i;
	EMP e[MAXSIZE];
	for (i=0;i<MAXSIZE;i++)
	{
		printf("Enter Employee %d no. : ",i+1);
		scanf("%d",&e[i].empno);
		printf("Enter Employee %d name : ",i+1);
		scanf("%s",&e[i].empname);
		printf("Enter %s's departnemt name : ",e[i].empname);
		scanf("%s",&e[i].deptname);
		printf("Enter %s's salary : ",e[i].empname);
		scanf("%d",&e[i].salary);
		printf("\n");
	}
	
	printf("Emp No.\t Emp Name \t Dept. Name \t Salary\n");
	for (i=0;i<MAXSIZE;i++)
	{
		printf("%d \t %s \t %s \t\t %d\n",e[i].empno,e[i].empname,e[i].deptname,e[i].salary);
	}
}
