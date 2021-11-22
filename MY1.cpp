#include<stdio.h>
int main()
{
	int marks;
	printf("Enter the marks of student\n");
	scanf("%d",&marks);
	if(marks>=85&&marks<=100)
	printf("GRADE A");
	else if(marks>=70&&marks<85)
	printf("GRADE B");
	else if(marks>=55&&marks<70)
	printf("GRADE C");
	else if(marks>=40&&marks<55)
	printf("GRADE D");
	else
	printf("GRADE F");
}