//10. Write a program to print a string in reverse using a pointer
#include<stdio.h>
void sum(char **p,int s)
{ 	int i;
for(i=s-1;i>=0;i--)
printf("%c",*(p+i));	
}
int main()
{
	char *a = "myname";
    sum(a,6);
	return 0;
}
