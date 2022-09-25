//9. Write a program to print the elements of an array in reverse order

#include<stdio.h>
void sum(int *p,int s)
{ 	int i;
for(i=s-1;i>=0;i--)
printf("%d ",*(p+i));	
}
int main()
{
	int i,a[5]={1,2,3,4,5};
    sum(a,5);
	return 0;
}
