//6. Write a program to calculate the length of the string using a pointer
#include<stdio.h>
int f1(char *p)
{
	int i;
	for(i=0;*(p+i);i++);

	return i;
}
int main()
{
	char a[]="kripal";
int l=f1(a);
printf("%d",l);
	return 0;
}
