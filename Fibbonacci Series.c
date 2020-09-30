/*
C program to print fibbonacci series
*/

#include<stdio.h>
//Function to print Fibbonacci series
void fibbo(int a,int b, int steps)
{
	//if steps are 0, return
	if(steps==0)
	{
		return;
	}
	//else print a+b and call function again with updated values of a,b and steps 
	else
	{
		printf("%d ",a+b);
		fibbo(b,a+b,--steps); 
	}
}
//Main Function
int main()
{
	//First two term of fibbonacci is 0 and 1
	int a=0,b=1,steps;
	printf("Enter the numbert of steps:");
	scanf("%d",&steps);
	printf("%d %d ",a,b);
	//calling function
	fibbo(a,b,steps);
}
