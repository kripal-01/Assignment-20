//7. Write a program to count the number of vowels and consonants in a string using a
//pointer.
#include<stdio.h>

void swap(char **p)
{
	int v=0,c=0;
	char s[]="aeiouAEIOU";
if(**p==s)
{
	v++;

}
printf("vowels are %d and consonant are %d",v,6-v);

}
int main()
{
	char *a[6]="kripal";
	swap(&a);

	
	return 0;
}
