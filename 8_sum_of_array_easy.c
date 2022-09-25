//8. Write a program to compute the sum of all elements in an array using pointers
#include<stdio.h>
int sum(int *p,int s)
{ int su=0,i;
	for(i=0;i<s;i++)
	su+=*(p+i);
	return su;
	
}
int main()
{
	int a[5]={1,2,3,4,5};
printf("%d",sum(a,5));
	return 0;
}
