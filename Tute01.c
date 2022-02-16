/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculateand print the average of the two marks. */
#include<stdio.h>
int main (void)
{
	
	int mark1,mark2,mark3;
	float avg,total;
	printf("enter 1st module marks:");
	scanf("%d",&mark1);
	
	printf("enter 1st module marks:");
	scanf("%d",&mark2);
	
	printf("enter 1st module marks:");
	scanf("%d",&mark3);
	total=mark1+mark2+mark3;
	avg=total/3;
	printf("average mark is: %.2f",avg);
	printf("\n");
	if(avg>=60)
	{
		printf("you are selected to software enginering degree program");
	}
	return 0;
} 


