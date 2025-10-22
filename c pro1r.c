#include<stdio.h>
#include<stdlib.h>
void main()
{
	int number;
	printf("enter a number\n");
	scanf("%d",&number);
	if(number %2==0)
	goto even;
	else
	goto odd;
	even:
	printf("%d is even\n",number);
	exit(0);
	odd:
	printf("%d is odd\n",number);
}
