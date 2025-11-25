#include<stdio.h>
int sumArray(int arr[],int n)
{
	int sum=0,i;
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	return sum;
}
int main()
{
	int n,i;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	int result=sumArray(arr,n);
	printf("Sum of array elements=%d\n",result);
	return 0;
}