#include<stdio.h>
int main()
{
	int num;
	float fnum;
	char ch;
	char str[100];
	printf("starting the program...\n");
	printf("enter a character:");
	ch=getchar();
	getchar();
	printf("enter a sring:");
	gets(str);
	printf("you entered character:");
	putchar(ch);
	printf("\n");
	printf("you entered string");
	puts(str);
	printf("enter an integer:");
	scanf("%d",&num);
	printf("enter a float:");
	scanf("%f",&fnum);
	printf("you entered integer:%d\n",num);
	printf("you entered float:%.2f\n",fnum);
	printf("stopping the program...\n");
	return 0;
}