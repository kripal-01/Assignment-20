//5. Write a program to find the maximum number between two numbers using a pointer
#include<stdio.h>

void great(int *p,int *q)
{
*p>*q?*p:*q;

}
int main()
{
	int a=5,b=10;
	
	printf("%d is greatest",great(&a,&b));
	return 0;
}
