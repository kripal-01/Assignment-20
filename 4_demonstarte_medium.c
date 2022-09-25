//4. Write a program in C to demonstrate how to handle the pointers in the program.
#include<stdio.h>
int main()
{
	int x=10,*p,**q,***r;
	p=&x;
	q=&p;
	r=&q;
	printf("%d %d %d %d\n%d %d %d %d\n%d %d %d\n%d %d\n%d",x,*p,**q,***r,
	&x,p,*q,**r,&p,q,*r,&q,r,&r);
	return 0;
}
