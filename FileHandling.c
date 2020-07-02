#include<stdio.h>

int main()
{
	char s[10];
	int i,c=0;
	gets(s);
	for (i=0;i<20;i++)
	{
		if (s[i]!='\0')
		c++;
		else
		break;
	}
	char r[c];
	for (i=0;i<c;i++)
	r[i]=s[c-i-1];
	puts(r);
	FILE *f,*g;
	f = fopen("first.txt","w");
	fprintf(f,"%s",r);
	fclose(f);
	f = fopen("first.txt","r");
	char h[c];
	g = fopen("second.txt","w");
	for (i=0;i<c;i++)
	{
		h[i] = getc(f);
	}
	fprintf(g,"%s",r);
	fclose(f);
	fclose(g);
	
}
