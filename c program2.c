#include<stdio.h>
int main()
{
	int a=10,b=5;
	printf("arithmetic operations:\n");
	printf("addition:%d+%d=%d\n",a,b,a+b);
	printf("subtraction:%d-%d=%d\n",a,b,a-b);
	printf("multiplication:%d*%d=%d\n",a,b,a*b);		
	printf("division:%d/%d=%d\n",a,b,a/b);
	printf("modulus:%d%%d=%d\n",a,b,a%b);
	printf("addition:%d+%d=%d\n",a,b,a+b);
	printf("\nincrement and decrement operations:\n");
	printf("original a:%d\n",a);
	printf("a after incremant:%d\n",++a);
	printf("a after decremant:%d\n",a--);
	printf("\ncomparisons operations:\n");
	printf("is a>b?\n",a>b);
	printf("is a<b?\n",a<b);
	printf("is a>=b?\n",a>=b);
	printf("is a<=b?\n",a<=b);
	printf("is a==b?\n",a==b);
	printf("is a|=b?\n",a|=b);
	printf("\nlogical operations:\n");
	printf("logical operations:\n");
	printf("logicalAND(true&&false):%d\n",1&&0);
	printf("logicalOR(true||false):%d\n",1||0);
	printf("logicalNOT(!true):%d\n",!1);
	printf("\n ternary operator:\n");
	int max=(a>b)?a:b;
	printf("maximum of %d and %d is %d\n",a,b,max);
	printf("stopping the program...\n");
	return 0;
}