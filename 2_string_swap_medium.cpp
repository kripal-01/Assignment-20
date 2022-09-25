//2. Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include<stdio.h>

void swap(char **p,char **q)
{
	char *t;
	t=*p;
	*p=*q;
	*q=t;
}
int main()
{
	char *a[20]="kripal",*b[20]="singh";
	swap(&a,&b);
	printf("%s %s",a,b);
	
	return 0;
}
