//Assignment - 20 A Job Ready Bootcamp in C++, DSA and IOT MySirG
//Pointers
//1. Write a function to swap values of two in variables of calling function. (TSRS)
#include<stdio.h>
void swap(int *p,int *q)
{
	int t;
	t=*p;
	*p=*q;
	*q=t;
}
int main()
{
	int a=5,b=10;
	swap(&a,&b);
	printf("a=%d\nb=%d",a,b);
	return 0;
}
