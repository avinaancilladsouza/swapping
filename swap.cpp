#include<stdio.h>
int main()
{
	int num1,num2, temp;
	printf("enter the two numbers that has to be swapped");
	scanf("%d%d",&num1, &num2);
	  temp=num1;
	  num1=num2;
	  num2=temp;
	  printf("\nafter swapping,num1=%d\n",num1);
	  printf("\nafter swapping,num2=%d\n",num2);
	return 0;
}