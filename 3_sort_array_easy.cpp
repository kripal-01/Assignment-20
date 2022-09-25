//3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include<stdio.h>
void sort(int *p,int size)
{
	int i,j,t;
	printf("enter 5 values : ");
	for(i=0;i<size;i++)
	scanf("%d",p+i);
	for(i=0;i<size-1;i++)
	{
		t=0;
		for(j=i+1;j<size;j++)
		{
			if((*(p+i))>(*(p+j)))
		{
			t=*(p+i);
			*(p+i)=*(p+j);
			*(p+j)=t;
		}
		}
		
	}
}
int main()
{
	int i,arr[5];
	sort(arr,5);
	for(i=0;i<5;i++)
	printf("%d ",arr[i]);
	return 0;
}

